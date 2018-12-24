[%bs.raw {|require('./app.css')|}];

type category = {
id: string,
name: string,
url: string,
image: string,
description: string
};

type action =
 | INIT
 | FAIL
 | SUCCESS(list(category))

type state =
 | ERROR(string)
 | LOADING
 | OFFLINE
 | ONLINE(list(category))

  let reducer = (action, _state) =>
   switch(action) {
     | INIT => ReasonReact.UpdateWithSideEffects(
          LOADING,
          let categories = Data.json.categories
          self.send(SUCCESS(categories))
          )
     | FAIL => ReasonReact.Update(OFFLINE)
     | SUCCESS(categories) => ReasonReact.Update(ONLINE(categories))
   };

let component = ReasonReact.reducerComponent("Loader");

let make = (_children) => {
  ...component,
  initialState: () => LOADING,
  reducer,
  didMount: self => {
  self.send(INIT)
  },
  render: self =>
  switch(self.state){
    | ERROR(err) => <div className = "notifications error"> ( ReasonReact.string("An Error Occured !!") ) </div>
                <Error data = err />
    | LOADING => <div className = "notifications loading"> ( ReasonReact.string("Please Wait") ) </div>
                <Loading />
    | OFFLINE => <div className = "notifications offline"> ( ReasonReact.string("Offline") ) </div>
                 <App categories = [] />
    | ONLINE(x) => <App categories = x />

};

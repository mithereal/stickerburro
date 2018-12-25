[%bs.raw {|require('./app.css')|}];

type category = {
id: string,
name: string,
url: string,
image: string,
description: string
};

type categories = option(list(category))

type action =
 | INIT
 | FAIL
 | SUCCESS(categories)

type state =
 | ERROR(string)
 | LOADING
 | OFFLINE
 | ONLINE(categories)

  let reducer = (action, _state) =>
   switch(action) {
     | INIT => ReasonReact.Update(LOADING)
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
  render: (self) =>
  switch(self.state) {
    | ERROR(err) => <div className = "notifications error"> ( ReasonReact.string("An Error Has Occurred") ) </div>
    | LOADING => <div className = "notifications loading"> ( ReasonReact.string("Please Wait") ) </div>
    | ONLINE(categories) => <App status = "online" categories = categories />
    | OFFLINE => <App status = "offline" categories = None />
    }

};

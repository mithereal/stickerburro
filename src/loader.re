[%bs.raw {|require('./app.css')|}];

type action =
 | INIT
 | FAIL
 | SUCCESS(string)

type state =
 | ERROR
 | LOADING
 | LOADED(string)

  let reducer = (action, _state) =>
   switch(action) {
     | INIT => ReasonReact.UpdateWithSideEffects(
          LOADING,
          let categories = Data.json.categories
          self.send(SUCCESS(categories))
          )
     | FAIL => ReasonReact.Update(ERROR)
     | SUCCESS(categories) => ReasonReact.Update(LOADED(categories))
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
    | ERROR => <div className = "notifications error"> ( ReasonReact.string("An Error Occured !!") ) </div>
               <App categories = [] />
    | LOADING => <div className = "notifications wait"> ( ReasonReact.string("Please Wait") ) </div>
    <App categories = [] />
    | LOADED(x) => <App categories = x />

};

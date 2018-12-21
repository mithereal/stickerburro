[%bs.raw {|require('./app.css')|}];

type action =
 | INIT
 | FAIL
 | SUCCESS

type state =
 | ERROR
 | LOADING
 | LOADED

  let reducer = (action, _state) =>
   switch(action) {
     | INIT => ReasonReact.UpdateWithSideEffects(
          LOADING,
          (
          )
          self.send(SUCCESS)
          )
     | FAIL => ReasonReact.Update(ERROR)
     | SUCCESS => ReasonReact.Update(LOADED)
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
    | ERROR => <div className="notifications error"> ( ReasonReact.string("An Error Occured !!") ) </div>
               <App />
    | LOADING => <App />
    | LOADED => <App />

};

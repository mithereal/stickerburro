[%bs.raw {|require('./app.css')|}];

type action =
 | INIT
 | FAILEDTOFETCH

type state =
 | LOADING
 | ERROR
 | LOADED

  let reducer = (action, _state) =>
   switch(action) {
     | INIT => ReasonReact.UpdateWithSideEffects(
          LOADING,
          (
          )
          )
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

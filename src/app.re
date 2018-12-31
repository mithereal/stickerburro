[%bs.raw {|require('./app.css')|}];

open Type;

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
     | INIT => ReasonReact.UpdateWithSideEffects(
                     LOADING,
                     (
                     self =>
                     self.send(SUCCESS(Data.demo_categories))
                     ),
                     )
     | FAIL => ReasonReact.Update(OFFLINE)
     | SUCCESS(categories) => ReasonReact.Update(ONLINE(categories))
   };

let component = ReasonReact.reducerComponent("App");

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
    | ONLINE(categories) => <Main status = "online" categories = categories />
    | OFFLINE => <Main status = "offline" categories = None />
    }

};

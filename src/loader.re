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
  render: self =>
  <div className = "loader">

</div>
}

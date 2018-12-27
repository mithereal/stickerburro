open Types;

type action =
 | INIT
 | FAIL
 | SUCCESS(Types.categories)

type state =
 | ERROR(string)
 | LOADING
 | OFFLINE
 | ONLINE(Types.categories)

 let c: category = {
                     id: "1",
                     name: "stickers",
                     url: "/stickers",
                     image: "/stickers.svg",
                     description: "the stickers menu"
                     }

 let cats: categories = Some([c]);

  let reducer = (action, _state) =>
   switch(action) {
     | INIT => ReasonReact.UpdateWithSideEffects(
                     LOADING,
                     (
                     self =>
                     self.send(SUCCESS(cats))
                     ),
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
  render: (self) =>
  switch(self.state) {
    | ERROR(err) => <div className = "notifications error"> ( ReasonReact.string("An Error Has Occurred") ) </div>
    | LOADING => <div className = "notifications loading"> ( ReasonReact.string("Please Wait") ) </div>
    | ONLINE(categories) => <App status = "online" categories = categories />
    | OFFLINE => <App status = "offline" categories = None />
    }

};

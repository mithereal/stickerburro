[%bs.raw {|require('./app.css')|}];

open Type;

open Belt;

[@bs.val] external unsafeJsonParse: string => 'a = "JSON.parse";

let localStorageNamespace = "stickerburro";

type action =
 | INIT
 | FAIL
 | SUCCESS(categories)

type state =
 | ERROR(string)
 | LOADING
 | OFFLINE(cart)
 | ONLINE(categories, cart)

 let localCart = () => {
 switch (Dom.Storage.(localStorage |> getItem(localStorageNamespace))) {
                                                      | None => None
                                                      | Some(data) =>  let json = unsafeJsonParse(data);
                                                                            Some(json)
                                                      };
 }

  let reducer = (action, _state) =>
   switch(action) {
     | INIT => ReasonReact.UpdateWithSideEffects(
                     LOADING,
                     (
                     self =>
                     self.send(SUCCESS(Data.demo_categories))
                     ),
                     )
     | FAIL => ReasonReact.Update(OFFLINE(localCart()))
     | SUCCESS(categories) =>  ReasonReact.Update(ONLINE(categories, localCart()))
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
    | ONLINE(categories, cart) => <Main status = "online" categories = categories cart = cart />
    | OFFLINE(cart) => <Main status = "offline" categories = None cart = cart />
    }

};

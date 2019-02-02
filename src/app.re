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
 | OFFLINE
 | ONLINE(categories, cart)


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
     | SUCCESS(categories) =>  let cart =
                                      switch (Dom.Storage.(localStorage |> getItem(localStorageNamespace))) {
                                      | None => None
                                      | Some(data) =>  Some(unsafeJsonParse(data));
                                      };
                                      ReasonReact.Update(ONLINE(categories,cart))
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
    | OFFLINE => <Main status = "offline" categories = None />
    }

};

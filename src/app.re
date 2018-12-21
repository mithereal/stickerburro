[%bs.raw {|require('./app.css')|}];

type action =
 | FETCHCHANNEL
 | FETCHEDWS(string)
 | FAILEDTOFETCH
 | CHECKOUT(string)

type state =
 | LOADING
 | ERROR
 | LOADED(string)
 | CHECKOUT(string)

  let reducer = (action, _state) =>
   switch(action) {
     | INIT => ReasonReact.UpdateWithSideEffects(
          LOADING,
          (
          )
          )
   };

let component = ReasonReact.reducerComponent("App");

let make = (_children) => {
  ...component,
  initialState: () => LOADING,
  reducer,
  didMount: self => {
  self.send(INIT)
  },
  render: self =>
  switch(self.state){
    | ERROR => <div className="error"> ( ReasonReact.string("An Error Occured !!") ) </div>
    | LOADING => <div className="app">
                 <Menubar ~categories= nil />
                 <div> ( ReasonReact.string("Loading... ") ) </div>
                 <Footer />
                 </div>
    | LOADED(id) => <div className="app">
                          <Menubar ~categories= Data.categories />
                          <Page products = nil />
                          <Footer />
                        </div>

};

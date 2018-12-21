type action =
 | FETCHCATEGORY
 | FAILEDTOFETCH

type state =
 | LOADING
 | ERROR
 | LOADED

  let reducer = (action, _state) =>
   switch(action) {
     | FETCHCATEGORY => ReasonReact.UpdateWithSideEffects(
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

  },
  render: self =>
  switch(self.state){
    | ERROR => <div className="error"> ( ReasonReact.string("An Error Occured !!") ) </div>
    | LOADING => <div className="app">
                 <Menubar ~categories= nil />
                 <Page products = nil />
                 <Footer />
                 </div>
    | LOADED => <div className="app">
                          <Menubar ~categories= Data.categories />
                          <Page products = nil />
                          <Footer />
                        </div>

};

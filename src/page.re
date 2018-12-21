let component = ReasonReact.statelessComponent("Page");

let make = (~products, _children) => {
  ...component,
  render: _self =>
  <div id="page" className="page">
  (

  switch (products) {

  | nil => <Header />
           <Featured />
           <Video />
  | _ => <Header />
         <Featured />
         <Video />

  }

  )

  </div>
};

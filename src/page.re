let component = ReasonReact.statelessComponent("Page");

let make = (~products, _children) => {
  ...component,
  render: _self =>
  <div id="page" className="page">

  (

  let product_count = 0

  switch (product_count > 0) {
  | true => <Products products = products />
  | _ => <Header />
         <Featured />
         <Video />

  }

  )

  </div>
};

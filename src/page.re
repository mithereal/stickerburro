let component = ReasonReact.statelessComponent("Page");

let make = (~products, ~current_product,  _children) => {
  ...component,
  render: _self =>
  <div id="page" className="page">

  (

  let product_count = 0

  switch (product_count > 0) {
  | true => <Main products = products, current_product = current_product />
  | _ => <Header />
         <Featured />
         <Video />

  }

  )

  </div>
};

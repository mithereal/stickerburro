
let component = ReasonReact.reducerComponent("Main");

let make = (~products, ~current_product, _children) => {
  ...component,
  render: _self =>
  (
    switch (current_product == nil) {
    true => <Products products = products />
     _ =>   <Product product = current_product />
    }
  )

};

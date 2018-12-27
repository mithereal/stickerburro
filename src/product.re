open Actions;

let mapOption = (opt, fn) =>
  switch opt {
  | None => None
  | Some(value) => Some(fn(value))
  };

let component = ReasonReact.statelessComponent("Product");

let make = (~data:option(Types.product), ~send, _children) => {
  ...component,
  render: _self =>

      <div  className = "product-page">

   (
              switch (data) {
              | None => <div  className = "product-error">  (ReasonReact.string("No product Selected")) </div>
              | Some(product) => <div  className = "product">
                                    <div className = "product-price">(ReasonReact.string(product.price))</div>
                                     <div className = "product-image">(ReasonReact.string(product.image))</div>
                                     <div className = "product-description">
                                     (ReasonReact.string(product.description))
                                     </div>
                                     <div className = "buttons">
                                        <button id = "add_to_cart" onClick=(_event => send(ADDTOCART(Some(product))))> (ReasonReact.string("Add To Cart")) </button>
                                     </div>
                                     </div>
              }

          )


    </div>
};

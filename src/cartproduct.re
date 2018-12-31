open Action;


let component = ReasonReact.statelessComponent("Cart Product");

let make = (~data:option(Type.product_quantity), ~send, _children) => {
  ...component,
  render: _self =>

      <div  className = "product-page">

   (
              switch (data) {
              | None => ReasonReact.null
              | Some(product) => <div className = "product">
                                     <div className = "product-name">(ReasonReact.string(product.name))</div>
                                     <div className = "product-image">(ReasonReact.string(product.image))</div>
                                     <div className = "product-quantity">(ReasonReact.string(product.quantity))</div>
                                     </div>

              }

          )


    </div>
};

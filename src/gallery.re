open Action;

let component = ReasonReact.statelessComponent("Product Gallery");

let make = (~data:option(Type.product),  ~send, _children) => {
  ...component,
  render: _self =>
              switch (data) {
              | None => ReasonReact.null
              | Some(product) => <div  className = "product-gallery">
              <div className = "product" onClick=(_event => send(PRODUCT(product)))>
                                     <div className = "product-name">(ReasonReact.string(product.name))</div>
                                     <div className = "product-image">(ReasonReact.string(product.image))</div>
                                     <div className = "product-description">(ReasonReact.string(product.description))</div>


                                     </div>
                                     </div>
              }

};

open Action;

let component = ReasonReact.statelessComponent("Product");

let make = (~data:option(Type.product), ~send, _children) => {
  ...component,
  render: _self =>
         switch (data) {
              | None => ReasonReact.null
              | Some(product) => <div  className = "product-page">
                                <div className = "product-profile">
                                     <div className = "product-name">(ReasonReact.string(product.name))</div>
                                     <div className = "product-image">(ReasonReact.string(product.image))</div>
                                     <div className = "product-description">(ReasonReact.string(product.description))</div>

<Options product = Some(product) options = None send = send />
                                     </div>

                                     </div>
              }
};

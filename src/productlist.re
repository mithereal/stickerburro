open Actions;

let component = ReasonReact.statelessComponent("Product List");

let make = (~data:option(Types.product), ~send, _children) => {
  ...component,
  render: _self =>

      <div  className = "product-page">

   (
              switch (data) {
              | None => ReasonReact.null
              | Some(product) => <div className = "product" onClick=(_event => send(PRODUCT(product)))>
                                     <div className = "product-name">(ReasonReact.string(product.name))</div>
                                     <div className = "product-image">(ReasonReact.string(product.image))</div>
                                     <div className = "product-description">(ReasonReact.string(product.description))</div>


                                     </div>
              }

          )


    </div>
};

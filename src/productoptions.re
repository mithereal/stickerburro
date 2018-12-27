open Actions;

let component = ReasonReact.statelessComponent("Product-Options");

let make = ( ~product:option(Types.product) , ~send, _children) => {
  ...component,
  render: _self =>

      <div  className = "product-options">
        (
                    switch (product) {
                    | None => ReasonReact.null
                    | Some(data) => <div className = "product-options">
                                    <div className = "product-size">
                                    <div className = "product-size-heading">(ReasonReact.string("Select a Size"))</div>
                                    <ul>
                                    <li>
                                    (ReasonReact.string("1x1"))
                                    </li>
                                    </ul>
                                    </div>
                                    <div className = "product-quantity">
                                    <div className = "product-quantity-heading">(ReasonReact.string("Select a Quantity"))</div>
                                    <ul>
                                    <li>
                                    (ReasonReact.string("50"))
                                    </li>
                                    </ul>
                                    </div>
                                        <div className = "buttons">
                                        <button id = "add_to_cart"
                                        onClick=(_event => send(ADDTOCART(Some(data))))> (ReasonReact.string("Add To Cart"))
                                        </button>
                                        </div>
                                        <div className="next-option" >
                                        (ReasonReact.string("Next: Upload Artwork"))
                                        </div>
                                        </div>
                                        }
        )

    </div>
};

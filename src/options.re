open Action;

type state = {
sizes: option(list(Type.sizes))
};


let reducer = (action, state) =>
switch(action){
 | PAGE(page) => ReasonReact.Update({ ...state, sizes: None })
};



let component = ReasonReact.reducerComponent("Options");

let make = ( ~product:option(Type.product) , ~options:option(Type.productsizeoptions) ,~send, _children) => {
  ...component,
  initialState: () => { sizes: None },
  reducer,
  render: _self =>

      <div  className = "product-options">
        (
                    switch (product) {
                    | None => ReasonReact.null
                    | Some(options) => <div className = "product-options">
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

                                    </li>
                                    </ul>
                                    </div>

                                        <div className = "buttons">

                                        <button id = "back"   onClick=(_event => send(PAGE("gallery")))> (ReasonReact.string("Back")) </button>
                                        <button id = "add_to_cart"
                                       >
                                        (ReasonReact.string("Add To Cart"))
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

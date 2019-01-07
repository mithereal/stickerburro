open Action;

type state = {
options: option(list(Type.product_option)),
selected: option(Type.product_option)
};



let reducer = (action, state) =>
switch(action){
 | PAGE(page) => ReasonReact.Update({ ...state, options: None})
 | SELECTOPTION(product_option) => ReasonReact.Update({ ...state, options: None, selected: Some(product_option)})
};



let component = ReasonReact.reducerComponent("Options");

let make = ( ~product:option(Type.product) , ~options:option(Type.product_options_list) ,~send, _children) => {
  ...component,
  initialState: () => { options: None, selected: None  },
  reducer,
  render: _self =>

      <>
        (
                    switch (product) {
                    | None => ReasonReact.null
                    | Some(data) => <div className = "product-options">
                                    <div className = "product-size">
                                    <div className = "product-size-heading">(ReasonReact.string("Select a Size"))</div>
                                    <ul>

                                    <li>
                                    <button  onClick=(_event => send(PAGE("gallery"))) >
                                    (ReasonReact.string("1x1"))
                                    </button>
                                    </li><li>
                                    <button >
                                    (ReasonReact.string("2x2"))
                                    </button>
                                    </li><li>
                                    <button >
                                    (ReasonReact.string("4x4"))
                                    </button>
                                    </li><li>
                                    <button >
                                    (ReasonReact.string("6x6"))
                                    </button>
                                    </li>
                                    </ul>
                                    </div>
                                    <div className = "product-quantity">
                                    <div className = "product-quantity-heading">(ReasonReact.string("Select a Quantity"))</div>
                                    <ul>
                                    <li>
                                    (ReasonReact.string("1"))
                                    </li><li>
                                    (ReasonReact.string("5"))
                                    </li><li>
                                    (ReasonReact.string("10"))
                                    </li><li>
                                    (ReasonReact.string("50"))
                                    </li><li>
                                    (ReasonReact.string("100"))
                                    </li><li>
                                    (ReasonReact.string("1000"))
                                    </li><li>
                                    (ReasonReact.string("5000"))
                                    </li><li>
                                    (ReasonReact.string("10000"))
                                    </li>
                                    </ul>
                                    </div>

                                        <div className = "buttons">

                                        <button id = "back"   onClick=(_event => send(PAGE("gallery")))> (ReasonReact.string("Back")) </button>
                                        <button id = "add_to_cart"
                                          onClick=(_event => send(ADDTOCART(data, "1","1x2")))>
                                        (ReasonReact.string("Add To Cart"))
                                        </button>
                                        </div>
                                        <div className="next-option" >
                                        (ReasonReact.string("Next: Upload Artwork"))
                                        </div>
                                        </div>
                                        }
        )

    </>
};

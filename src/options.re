open Action;

type state = {
options: option(list(Type.product_option)),
values: option(list(Type.product_option)),
selected_option: option(Type.product_option),
selected_value: option(Type.product_option)
};



let reducer = (action, state) =>
switch(action){
 | PAGE(page) => ReasonReact.Update({ ...state, options: None})
 | SELECTOPTION(product_option) => ReasonReact.Update({ ...state, values: None, selected_value: None, selected_option: Some(product_option)})

};



let component = ReasonReact.reducerComponent("Options");

let make = ( ~product:option(Type.product) , ~options:option(Type.product_options_list) ,~send, _children) => {
  ...component,
  initialState: () => { options: options, selected_option: None, values: None, selected_value: None  },
  reducer,
  render: _self =>

      <>
        (
                    switch (product) {
                    | None => ReasonReact.null
                    | Some(data) =>
                    (
                     switch (options) {
                                        | None => <div className = "buttons">

                                                                                                                                      <button id = "back"   onClick=(_event => send(PAGE("gallery")))> (ReasonReact.string("Back")) </button>
                                                                                                                                      <button id = "add_to_cart"
                                                                                                                                        onClick=(_event => send(PAGE("gallery")))>
                                                                                                                                      (ReasonReact.string("Add To Cart"))
                                                                                                                                      </button>
                                                                                                                                      </div>
                                        | Some(data) =>
                                            <div className = "product-options">
                                                                <div className = "product-options-heading">(ReasonReact.string("Select a Size"))</div>
                                                                                <div className = "product-option">

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

                                                                                <div className = "product-option-values">
                                                                                <div className = "product-option-values-heading">(ReasonReact.string("Select a Quantity"))</div>
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
                                                                                      onClick=(_event => send(PAGE("gallery")))>
                                                                                    (ReasonReact.string("Add To Cart"))
                                                                                    </button>
                                                                                    </div>
                                                                                    <div className="next-option" >
                                                                                    (ReasonReact.string("Next: Upload Artwork"))
                                                                                    </div>
                                                                                    </div>
                                        }
                    )

                }
        )

    </>
};

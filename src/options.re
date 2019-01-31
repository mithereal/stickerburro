open Action;

type state = {
options: option(list(Type.product_option)),
values: option(list(Type.product_option)),
selected_option: option(Type.product_option),
selected_value: option(Type.product_option)
};

let remove_duplicate_options = (options, field) => {
Belt.Array.keepMap(options, fun (x) => x[field])
}


let reducer = (action, state) =>
switch(action){
 | PAGE(page) => ReasonReact.Update({ ...state, options: None})
 | SELECTOPTION(product_option) => Js.log(product_option);
 ReasonReact.Update({ ...state, values: None, selected_value: None, selected_option: Some(product_option)})

};



let component = ReasonReact.reducerComponent("Options");

let make = ( ~product:option(Type.product) , ~options:option(Type.product_options_list) ,~send, _children) => {
  ...component,
  initialState: () => { options: options, selected_option: None, values: None, selected_value: None  },
  reducer,
  render: self =>

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
                                        | Some(option) =>
                                        let items = option |> List.map( p =>  <Option data = Some(p) send = self.send />  );
                                            <div className = "product-options">
                                                                <div className = "product-options-heading">(ReasonReact.string("Select a Size"))</div>

                                                                <ul>

                                                                (

                                                                ReasonReact.array(
                                                                                 Array.of_list(
                                                                                 items
                                                                                 )
                                                                                 )

                                                                )
                                                                </ul>


                                                                                <div className = "product-option-values">
                                                                                <div className = "product-option-values-heading">(ReasonReact.string("Select a Quantity"))</div>
                                                                                <ul>

                                                                                (
                                                                                                    switch (product) {
                                                                                                    | None => ReasonReact.null
                                                                                                    | Some(data) =>
                                                                                                    (
                                                                                                     switch (options) {
                                                                                                                        | None => ReasonReact.null
                                                                                                                        | Some(data) => ReasonReact.null
                                                                                                                        }
                                                                                                      )
                                                                                                      }
                                                                                    )

                                                                                </ul>
                                                                                </div>

                                                                                    <div className = "buttons">

                                                                                    <button id = "back"   onClick=(_event => send(PAGE("gallery")))> (ReasonReact.string("Back")) </button>
                                                                                    <button id = "add_to_cart"
                                                                                      onClick=(_event => send(ADDTOCART(data, None)))>
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

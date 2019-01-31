open Action;

let component = ReasonReact.statelessComponent("Cart");

let state = { }

let make = (~data:Type.cart, ~send , _children) => {
  ...component,
  render: _self =>
    <div className = "cart">
     (
                  switch (data) {
                  | None => ReasonReact.null
                  | Some(products) => let items = [];
                   ReasonReact.array(
                                     Array.of_list(
                                     items
                                     )
                                     )
                  }
      )
                    <div className = "buttons">
                    <button id = "back"   onClick=(_event => send(PAGE("product")))> (ReasonReact.string("Back")) </button>
                    <button id = "checkout"  onClick=(_event => send(PAGE("checkout")))> (ReasonReact.string("Checkout")) </button>
                    </div>
    </div>
};



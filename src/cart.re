

let component = ReasonReact.statelessComponent("Cart");

type action =
| PAGE(string)
| CHECKOUT(Types.products_list)

let make = (~data:Types.products_list, ~send , _children) => {
  ...component,
  render: _self =>
    <div className = "cart">
                    <div className = "buttons">
                    <button id = "back" onClick=(_event => send(PAGE("gallery"))) > (ReasonReact.string("Back")) </button>
                    <button id = "checkout" onClick=(_event => send(CHECKOUT(data)))> (ReasonReact.string("Checkout")) </button>
                    </div>
    </div>
};




let component = ReasonReact.statelessComponent("Cart");

type action =
| PAGE(string)
| CHECKOUT(Types.products)

let make = (~data:option(Types.products), ~send , _children) => {
  ...component,
  render: _self =>
    <div className = "cart">
                    <div className = "buttons">
                    <button id = "back"  > (ReasonReact.string("Back")) </button>
                    <button id = "checkout" > (ReasonReact.string("Checkout")) </button>
                    </div>
    </div>
};


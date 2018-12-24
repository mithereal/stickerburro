let component = ReasonReact.statelessComponent("Cart");

let make = (~data, ~send , _children) => {
  ...component,
  render: _self =>
    <div className = "cart">
         (
                    data
                    | List.map((product) => <Product data = product />)
                )
                    <div classname = "buttons">
                    <button id = "back" onClick=(_event => send(PAGE("gallery"))) > (ReasonReact.string("Back")) </button>
                    <button id = "checkout" onClick=(_event => send(CHECKOUT(data)))> (ReasonReact.string("Checkout")) </button>
                    </div>
    </div>
};


open Actions;

let component = ReasonReact.statelessComponent("Cart");


let make = (~data:option(Types.products), ~send , _children) => {
  ...component,
  render: _self =>
    <div className = "cart">
                    <div className = "buttons">
                    <button id = "back"   onClick=(_event => send(PAGE("gallery")))> (ReasonReact.string("Back")) </button>
                    <button id = "checkout"  onClick=(_event => send(PAGE("checkout")))> (ReasonReact.string("Checkout")) </button>
                    </div>
    </div>
};



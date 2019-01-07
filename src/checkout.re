let component = ReasonReact.statelessComponent("Checkout");

let make = (~cart:Type.cart, ~send, _children) => {
  ...component,
  render: _self =>
    <div className = "checkout">
    <h1> (ReasonReact.string("Checkout")) </h1>

    </div>
};

let component = ReasonReact.statelessComponent("Checkout");

let make = (~cart:Types.cart, ~send, _children) => {
  ...component,
  render: _self =>
    <div className = "checkout">

    </div>
};

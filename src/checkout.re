let component = ReasonReact.statelessComponent("Checkout");

let make = (~cart:Types.cart_products, ~send, _children) => {
  ...component,
  render: _self =>
    <div className = "checkout">
    <h1> (ReasonReact.string("Checkout")) </h1>

    </div>
};

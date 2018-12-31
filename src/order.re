let component = ReasonReact.statelessComponent("Order");

let make = (_children) => {
  ...component,
  render: _self =>
    <div className = "order">
    </div>
};

let component = ReasonReact.statelessComponent("Orders");

let make = (_children) => {
  ...component,
  render: _self =>
    <div className = "orders">
    <Order />

    </div>
};

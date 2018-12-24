let component = ReasonReact.statelessComponent("Error");

let make = (~data, _children) => {
  ...component,
  render: _self =>
  <div className = "error">

  </div>
};

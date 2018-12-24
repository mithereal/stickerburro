let component = ReasonReact.statelessComponent("Loading");

let make = (_children) => {
  ...component,
  render: _self =>
  <div className = "loading-large">
  </div>
};

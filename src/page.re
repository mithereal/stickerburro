let component = ReasonReact.statelessComponent("Page");

let make = (_children) => {
  ...component,
  render: _self =>
  <div id="Page" className="Page">
  </div>
};

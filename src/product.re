let component = ReasonReact.statelessComponent("Product");

let make = (~data, _children) => {
  ...component,
  render: _self =>
    <div className=data.class>
</div>
};

let component = ReasonReact.statelessComponent("Category");

let make = (~data:Types.products, ~send, _children) => {
  ...component,
  render: _self =>
    <div className = "products">

    </div>
};

let component = ReasonReact.statelessComponent("Category Menu Item");

open Action;

let make = (~data:Type.category, ~send,  _children) => {
  ...component,
  render: _self =>
    <div id = data.name className = "menu-item" onClick=(_event => send(CATEGORY(data))) >
    (ReasonReact.string(data.name))
    </div>
};

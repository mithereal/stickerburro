let component = ReasonReact.statelessComponent("Menu Item");

type action =
| CATEGORY(Types.category)

let make = (~data:Types.category, ~send,  _children) => {
  ...component,
  render: _self =>
    <li id = data.name className = "menu-item" onClick=(_event => send(CATEGORY(data))) >

    </li>
};

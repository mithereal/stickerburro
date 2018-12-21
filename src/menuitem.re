let component = ReasonReact.statelessComponent("Menu Item");

let make = (~data, _children) => {
  ...component,
  render: _self =>
    <li id= data.name className="menu-item" >
    (ReasonReact.string(data.text))
    </li>
};

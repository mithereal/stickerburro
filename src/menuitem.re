let component = ReasonReact.statelessComponent("Menu Item");

let make = (~name, ~styles, ~text, _children) => {
  ...component,
  render: _self =>
    <li id= name className= styles>
    (ReasonReact.string(text))
    </li>
};

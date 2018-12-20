let component = ReasonReact.statelessComponent("Login");

let make = (~id, ~class, ~text, _children) => {
  ...component,
  render: _self =>
    <li id= id className= class>
    (ReasonReact.string(text))
    </li>
};

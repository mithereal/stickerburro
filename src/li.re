let component = ReasonReact.statelessComponent("Login");

let make = (~i, ~c, ~text, _children) => {
  ...component,
  render: _self =>
    <li id= i className= c>
    (ReasonReact.string(text))
    </li>
};

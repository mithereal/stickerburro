let component = ReasonReact.statelessComponent("Menu");

let make = (~name, ~items:Types.categories, ~send, _children) => {
  ...component,
  render: _self =>
  <nav id = name title = name>
    <ul>

    </ul>
  </nav>
};

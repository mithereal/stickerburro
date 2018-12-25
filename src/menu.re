let component = ReasonReact.statelessComponent("Menu");

let make = (~name, ~items, ~send, _children) => {
  ...component,
  render: _self =>
  <nav id = name title = name>
    <ul>
    (
        items
        |> List.map((item) => <Menuitem data = item send = send />)
    )
    </ul>
  </nav>
};

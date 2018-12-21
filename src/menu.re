let component = ReasonReact.statelessComponent("Menu");

let make = (~name, ~items, _children) => {
  ...component,
  render: _self =>
  <nav id=name title=name>
    <ul>
    <Menuitem name="test" styles= "test" />
    </ul>
  </nav>
};

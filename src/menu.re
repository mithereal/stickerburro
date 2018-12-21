let component = ReasonReact.statelessComponent("Menu");

let make = (~name, ~items, _children) => {
  ...component,
  render: _self =>
  <nav id=name title=name>
    <ul>
    (
    let xStart = 1;
    let xEnd = 3;
    
    )
    <Menuitem data= item />
    </ul>
  </nav>
};

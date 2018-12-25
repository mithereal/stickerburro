let component = ReasonReact.statelessComponent("Footer");

let make = (~items, _children) => {
  ...component,
  render: _self =>
    <footer className = "sticky">

    <Menu name = "footer-menu" items = items />

    </footer>
};

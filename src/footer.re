let component = ReasonReact.statelessComponent("Footer");

let make = (_children) => {
  ...component,
  render: _self =>
    <footer className="sticky">

    <Menu name="footer-menu", ~items=footermenu />

    </footer>
};

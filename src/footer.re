let component = ReasonReact.statelessComponent("Footer");

let make = (~items, ~send, _children) => {
  ...component,
  render: _self =>
    <footer className = "sticky">

    <Menu name = "footer-menu" items = items send = send />

    </footer>
};

open Action;

let component = ReasonReact.statelessComponent("Footer");

let make = ( ~send, _children) => {
  ...component,
  render: _self =>
    <footer className = "footer" >
    <div className = "page-select"  onClick=(_event => send(PAGE("about")))>
    (ReasonReact.string("About"))
    </div>
    <div className = "page-select"  onClick=(_event => send(PAGE("careers")))>
    (ReasonReact.string("Careers"))
    </div>
    <div className = "page-select"  onClick=(_event => send(PAGE("contact")))>
    (ReasonReact.string("Contact"))
    </div>
    <div className = "page-select"  onClick=(_event => send(PAGE("support")))>
    (ReasonReact.string("Support"))
    </div>
    <div className = "page-select" onClick=(_event => send(PAGE("press")))>
    (ReasonReact.string("Press"))
    </div>
    </footer>
};

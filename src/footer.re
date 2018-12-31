let component = ReasonReact.statelessComponent("Footer");

let make = ( ~send, _children) => {
  ...component,
  render: _self =>
    <footer className = "footer" >
    <div>
    (ReasonReact.string("About"))
    </div>
    <div>
    (ReasonReact.string("Careers"))
    </div>
    <div>
    (ReasonReact.string("Etc"))
    </div>
    <div>
    (ReasonReact.string("Etc"))
    </div>
    </footer>
};

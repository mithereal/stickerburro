let component = ReasonReact.statelessComponent("Footer");

let make = ( ~send, _children) => {
  ...component,
  render: _self =>
    <footer className = "sticky" >

    </footer>
};

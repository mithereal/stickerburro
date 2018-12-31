let component = ReasonReact.statelessComponent("Contact");

let make = (_children) => {
  ...component,
  render: _self =>
    <div className = "contact">
     <div className = "title"> (ReasonReact.string("Contact"))</div>

     <div className = "textblock" >
     </div>

    </div>
};

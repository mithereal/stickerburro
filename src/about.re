let component = ReasonReact.statelessComponent("About");

let make = (_children) => {
  ...component,
  render: _self =>
    <div className = "about">
     <div className = "title"> (ReasonReact.string("About"))</div>

     <div className = "textblock" >
     </div>

    </div>
};

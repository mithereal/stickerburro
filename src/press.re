let component = ReasonReact.statelessComponent("Press");

let make = (_children) => {
  ...component,
  render: _self =>
    <div className = "press">
 <div className = "title"> (ReasonReact.string("Press"))  </div>

      <div className = "textblock" >
      </div>

    </div>
};

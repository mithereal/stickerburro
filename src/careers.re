let component = ReasonReact.statelessComponent("Careers");

let make = (_children) => {
  ...component,
  render: _self =>
    <div className =" careers">
 <div className = "title"> (ReasonReact.string("Careers"))</div>

      <div className = "textblock" >
      </div>

    </div>
};

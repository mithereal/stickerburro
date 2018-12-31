let component = ReasonReact.statelessComponent("Support");

let make = (_children) => {
  ...component,
  render: _self =>
    <div className = "support">
 <div className = "title"> (ReasonReact.string("Support")) </div>

      <div className = "textblock" >

      </div>
    </div>
};

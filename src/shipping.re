let component = ReasonReact.statelessComponent("Shipping");

let make = (_children) => {
  ...component,
  render: _self =>
    <div className = "ship">
 <div className = "title"> (ReasonReact.string("Ship"))</div>

      <div className = "textblock" >
      </div>

    </div>
};

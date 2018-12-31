let component = ReasonReact.statelessComponent("Partner");

let make = (~name, ~logo, _children) => {
  ...component,
  render: _self =>
  <div className = "partner" >
    <span>
     (ReasonReact.string(name))
    </span>
    </div>
};

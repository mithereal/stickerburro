let component = ReasonReact.statelessComponent("Partner");

let make = (~name, ~logo, _children) => {
  ...component,
  render: _self =>
    <div>
    <span>
    
    </span>
    (ReasonReact.string(name))
    </div>
};

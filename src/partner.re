let component = ReasonReact.statelessComponent("Partner");

let make = (~name, ~logo, _children) => {
  ...component,
  render: _self =>
    <div>
    <span>
    <img src = "(ReasonReact.string(logo))">
    </span>
    (ReasonReact.string(name))
    </div>
};

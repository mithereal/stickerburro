let component = ReasonReact.statelessComponent("Review");

let make = (~data, _children) => {
  ...component,
  render: _self =>
    <div className = "review">

    <div className = "review-stars"></div>
    <div className = "review-description">

    </div>
    </div>

};

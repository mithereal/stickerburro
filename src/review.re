let component = ReasonReact.statelessComponent("Review");

let make = (~data, _children) => {
  ...component,
  render: _self =>
    <div className = "review">

    <div className = "review-stars"><img src = "(ReasonReact.string(data.stars))"></div>
    <div className = "review-description">
    (ReasonReact.string(data.description))
    </div>
    </div>

};

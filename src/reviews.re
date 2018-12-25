
let component = ReasonReact.statelessComponent("Reviews");

let make = (~data:Types.reviews, _children) => {
  ...component,
  render: _self =>
    <div className = "reviews">
        (
            data
            |> List.map( review => <Review data = review />)
        )
    </div>
};

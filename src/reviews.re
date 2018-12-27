
let component = ReasonReact.statelessComponent("Reviews");

let make = (~data:option(Types.reviews), _children) => {
  ...component,
  render: _self =>
    <div className = "reviews">

        (
            switch (data) {
            | None => <div className = "blank" ></div>
            | Some(reviews) => reviews |> List.map( review => Js.log(review));
                      <div className = "blank" ></div>
            }

        )

    </div>
};


let component = ReasonReact.statelessComponent("Reviews");

let make = (~data:option(Type.reviews), _children) => {
  ...component,
  render: _self =>
            switch (data) {
            | None => ReasonReact.null
            | Some(reviews) => let items = reviews |> List.map( review => <Review data = review />);

               <div className = "reviews">
                    (
                               ReasonReact.array(
                                                Array.of_list(
                                                items
                                                )
                                                )
                                                )
                     </div>

            }

};

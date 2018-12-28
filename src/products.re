let component = ReasonReact.statelessComponent("Products");

let make = ( ~data:Types.products, ~send, _children) => {
  ...component,
  render: _self => <div className = "products">

    (
        switch (data) {
        | None => ReasonReact.null
        | Some(products) => let items = products |> List.map( p =>  <Productlist data = Some(p) send = send />  );
                   ReasonReact.array(
                                    Array.of_list(
                                    items
                                    )
                                    )
        }

    )

    </div>
};

let component = ReasonReact.statelessComponent("Products");

let make = ( ~data:Type.products, ~send, _children) => {
  ...component,
  render: _self =>
   switch (data) {
        | None => ReasonReact.null
        | Some(products) => let items = products |> List.map( p =>  <Gallery data = Some(p) send = send />  );

        <div className = "products">
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

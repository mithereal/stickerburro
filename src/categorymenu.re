let component = ReasonReact.statelessComponent("Categeory Menu");

let make = (~name, ~items:Type.categories, ~send, _children) => {
  ...component,
  render: _self =>
  <nav id = name title = name>
    <div id = "menu-items" >
     (
                  switch (items) {
                  | None => ReasonReact.null
                  | Some(item) =>  let items = item |> List.map(i => <Categorymenuitem data = i send = send /> );
                  ReasonReact.array(
                                 Array.of_list(
                                 items
                                 )
                                 )

                  }
     )



    </div>
  </nav>
};

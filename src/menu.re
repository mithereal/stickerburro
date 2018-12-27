let component = ReasonReact.statelessComponent("Menu");

let make = (~name, ~items:Types.categories, ~send, _children) => {
  ...component,
  render: _self =>
  <nav id = name title = name>
    <ul className = "category-menu" >
     (
                  switch (items) {
                  | None => ReasonReact.null
                  | Some(item) =>  let items = item |> List.map(i => <Menuitem data = i send = send /> );
                  ReasonReact.array(
                                 Array.of_list(
                                 items
                                 )
                                 )

                  }
     )



    </ul>
  </nav>
};

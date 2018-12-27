let component = ReasonReact.statelessComponent("Category");

let mapOption = (opt, fn) =>
  switch opt {
  | None => None
  | Some(value) => Some(fn(value))
  };

let make = (~category:option(Types.category), ~data:Types.products, ~send, _children) => {
  ...component,
  render: _self =>
    <div className = "category">
    <div className = "category-title">
    <label>
      (
            switch (category) {
            | None => (ReasonReact.string("No Category Selected"))
            | Some(category) => (ReasonReact.string(category.name))
            }

        )

    </label>
    </div>


    <div className = "products">

    (
        switch (data) {
        | None => ReasonReact.null
        | Some(products) => let items = products |> List.map( p =>  <Product data = Some(p) send = send />  );
                   ReasonReact.array(
                                    Array.of_list(
                                    items
                                    )
                                    )
        }

    )

    </div>

    </div>
};

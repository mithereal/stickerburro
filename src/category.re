let component = ReasonReact.statelessComponent("Category");

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



    <Products data = data send = send />


    </div>
};

let component = ReasonReact.statelessComponent("Category");

let make = (~data, _children) => {
  ...component,
  render: _self =>
    <div className = "products">
        (
            data
            | List.map((product) => <Product data = product />)
        )
    </div>
};

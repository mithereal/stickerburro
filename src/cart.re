let component = ReasonReact.statelessComponent("Cart");

let make = (~data, _children) => {
  ...component,
  render: _self =>
    <div className = "cart">
         (
                    data
                    | List.map((product) => <Product data = product />)
                )
    </div>
};


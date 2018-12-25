let component = ReasonReact.statelessComponent("Category");

let make = (~data:Types.products, ~send, _children) => {
  ...component,
  render: _self =>
    <div className = "products">
        (
            data
            |> List.map( product => <Product data = product  send = send/>)
        )
    </div>
};

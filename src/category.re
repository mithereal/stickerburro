type product = {
id: string,
name: string,
price: string,
url: string,
image: string,
description: string
};

type products = list(product)


let component = ReasonReact.statelessComponent("Category");

let make = (~data:products, ~send, _children) => {
  ...component,
  render: _self =>
    <div className = "products">
        (
            data
            |> List.map( product => <Product data = product  send = send/>)
        )
    </div>
};

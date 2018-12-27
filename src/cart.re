open Actions;

let component = ReasonReact.statelessComponent("Cart");


let make = (~data:Types.products, ~send , _children) => {
  ...component,
  render: _self =>
    <div className = "cart">
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
                    <div className = "buttons">
                    <button id = "back"   onClick=(_event => send(PAGE("gallery")))> (ReasonReact.string("Back")) </button>
                    <button id = "checkout"  onClick=(_event => send(PAGE("checkout")))> (ReasonReact.string("Checkout")) </button>
                    </div>
    </div>
};



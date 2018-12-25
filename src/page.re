let component = ReasonReact.statelessComponent("Page");

let make = (~page, ~data, ~send, _children) => {
  ...component,
  render: _self =>
  <div id="page" className="page">

  (

  switch (page) {
  | "gallery" => <Category data = data send = send />
  | "category" => <Category data = data send = send />
  | "product" => <Product data = data  send = send />
  | "cart" => <Cart data = data  send = send />
  | _ => <Header />
         <Featured />
         <Video />

  }

  )

  </div>
};

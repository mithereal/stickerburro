let component = ReasonReact.statelessComponent("Page");

let make = (~page, ~data,  _children) => {
  ...component,
  render: _self =>
  <div id="page" className="page">

  (

  switch (page) {
  | "gallery" => <Category data = data />
  | "category" => <Category data = data />
  | "product" => <Product data = data />
  | "cart" => <Cart data = data />
  | _ => <Header />
         <Featured />
         <Video />

  }

  )

  </div>
};

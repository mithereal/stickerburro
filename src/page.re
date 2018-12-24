let component = ReasonReact.statelessComponent("Page");

let make = (~page, ~data,  _children) => {
  ...component,
  render: _self =>
  <div id="page" className="page">

  (

  switch (page) {
  | "gallery" => <Products data = data />
  | "product" => <Product data = data />
  | _ => <Header />
         <Featured />
         <Video />

  }

  )

  </div>
};

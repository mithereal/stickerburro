[%bs.raw {|require('./app.css')|}];

open Types;

type state =  {
status: string,
account: option(account),
categories: categories,
products: products,
current_category: option(category),
current_product: option(product),
cart: option(products),
currency: option(string),
token: option(string),
page: string
};

type action =
 | CATEGORY(category)
 | PRODUCT(product)
 | PAGE(string)

let reducer = (action, state) =>
switch(action){
   | PAGE(page) => ReasonReact.Update({ ...state, page: page })
   | PRODUCT(product) => ReasonReact.Update({ ...state, current_product: Some(product) })
   | CATEGORY(category) =>  ReasonReact.Update({ ...state, current_category: Some(category) })
   }

let component = ReasonReact.reducerComponent("App");

let make = (~status, ~categories, _children) => {
  ...component,
  initialState: () => { status: status, account: None, categories: Some(categories), products: None, current_category: None, current_product: None, cart: None, token: None, page: Some("featured"), currency: Some("USD") },
  reducer,
  render: self =>
    <div className="app">
    <Menubar categories = self.state.categories send = self.send />
<div id="page" className="page">
    (
    switch (self.state.page) {
      | "gallery" => <Category data = self.state.products send = send />
      | "product" => <Product data = self.state.current_product  send = send />
      | "cart" => <Cart data = self.state.cart  send = send />
      | "featured" => <Header />
                      <Featured />
                      <Video />
      | _ => <div> ( ReasonReact.string("Nothing to see here") )  </div>
      }
    )
</div>
    <Footer send = send />
    </div>
    }
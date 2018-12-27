[%bs.raw {|require('./app.css')|}];

open Types;
open Actions;

type state =  {
status: string,
account: option(account),
categories: categories,
products: products,
current_category: option(category),
current_product: option(product),
cart: cart,
currency: option(string),
token: option(string),
page: string
};



let reducer = (action, state) =>
switch(action){
   | ADDTOCART(p) => ReasonReact.Update({ ...state, page: "cart" })
   | PAGE(page) => ReasonReact.Update({ ...state, page: page })
   | PRODUCT(product) => ReasonReact.Update({ ...state, current_product: Some(product) })
   | CATEGORY(category) =>  ReasonReact.Update({ ...state, current_category: Some(category) })
   }

let component = ReasonReact.reducerComponent("App");

let make = (~status, ~categories:Types.categories, _children) => {
  ...component,
  initialState: () => { status: status, account: None, categories: categories, products: None, current_category: None, current_product: None, cart: None, token: None, page: "index", currency: Some("USD") },
  reducer,
  render: self =>
    <div className="app">
    <Categorybar categories = self.state.categories send = self.send />
<div id="page" className="page">
    (
    switch (self.state.page) {
      | "gallery" => <Category category = self.state.current_category data = self.state.products send = self.send />
      | "product" => <Product data = None  send = self.send />
      | "cart" => <Cart data = self.state.cart  send = self.send />
      | "featured" => <Featured />
      | "index" => <Frontpage />
      | "careers" => <Careers />
      | "contact" => <Contact />
      | "checkout" => <Checkout cart = self.state.cart send = self.send  />
      | "support" => <Support />
      | "press" => <Press />
      | "about" => <About />
      | "shipping" => <Shipping />
      | "orders" => <Orders />
      | "order" => <Order />
      | "register" => <Register />
      | "login" => <Login />
      | _ => <Frontpage />
      }
    )
</div>
    <Footer send = self.send />
    </div>
    }
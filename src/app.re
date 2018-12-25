[%bs.raw {|require('./app.css')|}];

type account = {
login: string,
currency: string
};

type category = {
id: string,
name: string,
url: string,
image: string,
description: string
};

type product = {
id: string,
name: string,
price: string,
url: string,
image: string,
description: string
};

type categories = option(list(category))

type products = option(list(product))

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
page: option(string)
};

type action =
 | CATEGORY(category)
 | PRODUCT(product)
 | PAGE(string)

let reducer = (action, _state) =>
switch(action){
   | PAGE(page) => ReasonReact.Update({ ...state, page: Some(page) })
   | PRODUCT(product) => ReasonReact.Update({ ...state, current_product: Some(product) })
   | CATEGORY(category) =>  ReasonReact.Update({ ...state, current_category: Some(category) })
   }

let component = ReasonReact.reducerComponent("App");

let make = (~status, ~categories, _children) => {
  ...component,
  initialState: () => { status: status, account: None, categories: Some(categories), products: None, current_category: None, current_product: None, cart: None, token: None, page: Some("gallery"), currency: Some("USD") },
  reducer,
  render: self =>
    <div className="app">
    <Menubar categories = self.state.categories send = self.send />

    (
    switch (self.state.page) {
      | "gallery" => <Page page = "gallery" data = self.state.products  send = self.send  />
      | "product" => <Page page = "product" data = self.state.product  send = self.send  />
      | "cart" => <Page page = "cart" data = self.state.cart send = self.send  />
      | _ => <Page page = "404" data = nil />
      }
    )

    <Footer />
    </div>
    }
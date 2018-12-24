type action =
 | CATEGORY(string)
 | PRODUCT(string)
 | PAGE(string)

type state =  {
status: string,
account: option(account),
categories: option(list(category)),
products: option(list(product)),
current_category: option(category),
current_product: option(product),
cart: option(list(product)),
currency: option(string),
token: option(string),
page: option(string)
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

type account = {
login: string,
currency: string
};

module Decode = {
   let cat = (category) => Json.Decode.{
     id: category |> field("id", string)
     name: category |> field("name", string)
     url: category |> field("url", string)
     image: category |> field("image", string)
     description: category |> field("description", string)
     }

     let prod = (product) => Json.Decode.{
     id: product |> field("id", string)
     name: product |> field("name", string)
     url: product |> field("url", string)
     price: product |> field("price", string)
     image: product |> field("image", string)
     description: product |> field("description", string)
     }

     let acc = (account) => Json.Decode.{
     login: account |> field("login", string)
     currency: account |> field("currency", string)
     }
    };

  let reducer = (action, _state) =>
     | PAGE(page) => ReasonReact.Update({ {...state, page: Some(page) })
     | PRODUCT(product) => ReasonReact.Update({ {...state, current_product: Some(product) })
     | CATEGORY(category) => products = None;
        ReasonReact.Update({ {...state, current_category: Some(category), products: products })
   };

let component = ReasonReact.reducerComponent("App");

let make = (~status, ~categories, _children) => {
  ...component,
  initialState: () => { status: status, account: None, categories: Some(categories), products: None, current_category: None, current_product: None, cart: None, token: None, page: Some("gallery"), currency: Some("USD") },
  reducer,
  render: self =>
    <div className="app">
    <Menubar categories = self.state.categories />

    (
    switch (self.state.page) {
      | "gallery" => <Page page = "gallery" data = self.state.products  />
      | "product" => <Page page = "product" data = self.state.product  />
      | "cart" => <Page page = "cart" data = self.state.cart  />
      | _ => <Page page = "404" data = nil />
    )


    <Footer />
    </div>


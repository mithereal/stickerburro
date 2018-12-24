type action =
 | LOADCATEGORY(string)
 | LOADPRODUCTS(string)

type state =  {
account: option(account),
categories: option(list(category)),
products: option(list(product)),
current_category: option(category),
current_product: option(product),
cart: option(list(product)),
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

  let reducer = (action, _state) =>
     | LOADPRODUCTS(category) => products = None;
                                 ReasonReact.Update({ {...state, current_category: Some(category), products: products })
     | LOADPRODUCT(product) => ReasonReact.Update({ {...state, current_product: Some(product) })
   };

let component = ReasonReact.reducerComponent("App");

let make = (~categories, _children) => {
  ...component,
  initialState: () => { account: None, categories: Some(categories), products: None, current_category: None, current_product: None, cart: None, token: None, page: "gallery" },
  reducer,
  render: self =>
    <div className="app">
    <Menubar categories = state.categories />

    (
    switch (state.page) {
      | "gallery" => <Page page = "gallery" data = state.products  />
      | "product" => <Page page = "product" data = state.product  />
      | "cart" => <Page page = "cart" data = state.cart  />
      | _ => <Page page = state.page data = nil />
    )


    <Footer />
    </div>


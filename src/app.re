type action =
 | LOADCATEGORY(string)
 | LOADPRODUCTS(string)

type state =  {
categories: option(list(category)),
products: option(list(product)),
current_category: option(category),
current_product: option(product),
cart: option(list(product))
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
     | LOADPRODUCT(products) => ReasonReact.Update({ {...state, current_product: Some(product) })
   };
type state =
 | LOADING
 | ERROR
let component = ReasonReact.reducerComponent("App");

let make = (~categories, _children) => {
  ...component,
  initialState: () => { categories: Some(categories), products: None, current_category: None, current_product: None, cart: None },
  reducer,
  render: self =>
    <div className="app">
    <Menubar categories = state.categories />
    <Page page = "gallery" data = state.products  />
    <Footer items = [] />
    </div>


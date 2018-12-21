type action =
 | LOADCATEGORY
 | LOADPRODUCTS(category)

type state =  {
categories: list(category),
products: list(product)
};

type category = {
name: string,
url: string
}

type product = {
name: string,
url: string,
description: string,
image: string,
}


  let reducer = (action, _state) =>
   switch(action) {
     | LOADCATEGORY => ReasonReact.UpdateWithSideEffects(

          )
          category = nil;
          self.send(LOADPRODUCTS(category))
     | LOADPRODUCTS(category) => products = [];
                                 ReasonReact.Update(products: products)
   };

let component = ReasonReact.reducerComponent("App");

let make = (~categories, _children) => {
  ...component,
  initialState: () => { categories: categories, products: [] },
  reducer,
  render: self =>
    <div className="app">
    <Menubar categories = state.categories />
    <Page products = state.products />
    <Footer items= [] />
    </div>


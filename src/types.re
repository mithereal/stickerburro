
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

type product_quantity = {
id: string,
name: string,
price: string,
image: string,
quantity: string,
size: string
}

type cart_products = option(list(product_quantity))


type product = {
id: string,
name: string,
price: string,
url: string,
image: string,
description: string
};

type item = {
id: string,
name: string
}

type review = {
id: string,
name: string
}

type reviews = list(review)

type menu = list(item)

type categories = option(list(category))
type categories_list = list(category)

type products = option(list(product))

type products_list = list(product)

type quantity = {
    id: string,
    price: string
}

type cart = products

type sizeoptions =  {
                   id: string,
                   name: string,
                   quantity: quantity
                   }

type productsizeoptions = list(sizeoptions)

type sizes = {
name: string,
size: string,
quantity: string,
price: string
};

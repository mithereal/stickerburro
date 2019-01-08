
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

type product_option = {
id: string,
name: string,
price: string,
quantity: string
}

type product = {
id: string,
name: string,
price: string,
url: string,
image: string,
description: string,
options: option(list(product_option))
};

type item = {
id: string,
name: string
}

type review = {
id: string,
name: string
}



type product_with_options = {
id: string,
name: string,
price: string,
url: string,
image: string,
description: string,
options: option(list(product_option))
}

type reviews = list(review)

type menu = list(item)

type categories = option(list(category))

type categories_list = list(category)

type products = option(list(product))

type products_list = list(product)

type product_options = option(list(product_option))

type product_options_list = list(product_option)

type cart = option(list(product))


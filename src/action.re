open Type;

type action =
 | CATEGORY(category)
 | PRODUCT(product)
 | PAGE(string)
 | ADDTOCART(option(product))

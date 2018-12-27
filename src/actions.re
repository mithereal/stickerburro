type action =
 | CATEGORY(Types.category)
 | PRODUCT(Types.product)
 | PAGE(string)
 | ADDTOCART(option(Types.product))
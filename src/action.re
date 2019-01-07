open Type;

type action =
 | SELECTOPTION(product_option)
 | CATEGORY(category)
 | PRODUCT(product)
 | PAGE(string)
 | ADDTOCART(product, string, string)

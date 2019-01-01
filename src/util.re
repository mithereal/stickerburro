open Type;

let product_to_quantity = (product: product, quantity, size) => {
let product_with_quantity = {
id: product.id,
name: product.name,
price: product.price,
image: product.image,
quantity: quantity,
size: size
};
product_with_quantity;
};
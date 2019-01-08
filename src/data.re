open Type;

 let demo_category1: category = {
                     id: "1",
                     name: "stickers",
                     url: "/stickers",
                     image: "/stickers.svg",
                     description: "the stickers menu"
                     }
 let demo_category2: category = {
                     id: "1",
                     name: "stickers",
                     url: "/stickers",
                     image: "/stickers.svg",
                     description: "the stickers menu"
                     }
 let demo_category3: category = {
                     id: "1",
                     name: "stickers",
                     url: "/stickers",
                     image: "/stickers.svg",
                     description: "the stickers menu"
                     }
 let demo_category4: category = {
                     id: "1",
                     name: "stickers",
                     url: "/stickers",
                     image: "/stickers.svg",
                     description: "the stickers menu"
                     }

 let demo_categories: categories = Some([demo_category1,demo_category2,demo_category3,demo_category4]);


let demo_option: product_option = {
id: "1",
name: "string",
price: "4",
quantity: "3"
}

let demo_option2: product_option = {
id: "2",
name: "string",
price: "3",
quantity: "4"
}
let demo_option3: product_option = {
id: "3",
name: "string",
price: "2",
quantity: "5"
}
let demo_option4: product_option = {
id: "4",
name: "string",
price: "1",
quantity: "5"
}

let demo_product_options: product_options = Some([demo_option,demo_option2,demo_option3,demo_option4]);

 let demo_product: product = {
                     id: "1",
                     name: "stickers",
                     url: "/stickers",
                     price: "2.00",
                     image: "/stickers.svg",
                     description: "the stickers menu",
                     options: demo_product_options
                     }

                     let demo_product2: product = {
                     id: "1",
                     name: "stickers2",
                     url: "/stickers2",
                     price: "4.00",
                     image: "/stickers2.svg",
                     description: "the stickers2 menu",
                     options: demo_product_options
                     }

                     let demo_product3: product = {
                     id: "1",
                     name: "stickers2",
                     url: "/stickers2",
                     price: "4.00",
                     image: "/stickers2.svg",
                     description: "the stickers2 menu",
                     options: None
                     }

                     let demo_product4: product = {
                     id: "1",
                     name: "stickers2",
                     url: "/stickers2",
                     price: "4.00",
                     image: "/stickers2.svg",
                     description: "the stickers2 menu",
                     options: None
                     }

let demo_products: products = Some([demo_product,demo_product2,demo_product3,demo_product4]);


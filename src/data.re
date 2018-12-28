open Types;



 let demo_category: category = {
                     id: "1",
                     name: "stickers",
                     url: "/stickers",
                     image: "/stickers.svg",
                     description: "the stickers menu"
                     }

 let demo_categories: categories = Some([demo_category]);

 let demo_product: product = {
                     id: "1",
                     name: "stickers",
                     url: "/stickers",
                     price: "2.00",
                     image: "/stickers.svg",
                     description: "the stickers menu"
                     }

                     let demo_product2: product = {
                     id: "1",
                     name: "stickers2",
                     url: "/stickers2",
                     price: "4.00",
                     image: "/stickers2.svg",
                     description: "the stickers2 menu"
                     }

let demo_products: products = Some([demo_product,demo_product2]);



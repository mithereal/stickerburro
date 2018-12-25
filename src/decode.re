 let cat = (category) => Json.Decode.{
     id: category |> field("id", string),
     name: category |> field("name", string),
     url: category |> field("url", string),
     image: category |> field("image", string),
     description: category |> field("description", string)
     };

     let prod = (product) => Json.Decode.{
     id: product |> field("id", string),
     name: product |> field("name", string),
     url: product |> field("url", string),
     price: product |> field("price", string),
     image: product |> field("image", string),
     description: product |> field("description", string)
     };

     let acct = (account) => Json.Decode.{
     login: account |> field("login", string),
     currency: account |> field("currency", string)
     };

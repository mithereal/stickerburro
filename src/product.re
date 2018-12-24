let component = ReasonReact.statelessComponent("Product");

let make = (~data, ~send, _children) => {
  ...component,
  render: _self =>
    <div id = data.id className = data.class>

    <div className = "product-image"><img src = "(ReasonReact.string(data.logo))"></div>
    <div className = "product-description">
    (ReasonReact.string(data.description))
    </div>
    <div classname = "buttons">
       <button id = "add_to_cart" onClick=(_event => send(ADDTOCART(data)))> (ReasonReact.string("Add To Cart")) </button>
    </div>
 
    </div>
};

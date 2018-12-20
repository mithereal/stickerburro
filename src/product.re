let component = ReasonReact.statelessComponent("Product");

let make = (~data, _children) => {
  ...component,
  render: _self =>
    <div id= data.id className=data.class>
    <div><img src="(ReasonReact.string(data.logo))"></div>
    <div className="product-description">
    (ReasonReact.string(data.description))
    </div>
    </div>
};

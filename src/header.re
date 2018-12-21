let component = ReasonReact.statelessComponent("Header");

let make = (_children) => {
  ...component,
  render: _self =>
    <header className = "section-row hero text-left">
     <div className = "wrapper">
     <h1>
     (ReasonReact.string("Custom Stickers"))
     </h1>
     <p>
      (ReasonReact.string("Buy Now"))
     </p>
     <a href = "/custom" className = "button fixed-width large blue" id = "shop-now-button"> (ReasonReact.string("Shop Now")) </a>
     <a href = "/custom" className = "button fixed-width large raised orange" id = "get-samples-button"> (ReasonReact.string("Get Samples")) </a>
     </div>
    </header>
};

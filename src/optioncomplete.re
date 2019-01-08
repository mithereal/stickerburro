open Action;

let component = ReasonReact.statelessComponent("Option Complete");

let make = (~data:option(Type.product_option), ~send, _children) => {
  ...component,
  render: _self =>
         switch (data) {
              | Some(option) =>   <li className = "product-option-complete">
                                                                                                                 <button  onClick=(_event => send(PAGE("gallery"))) >
                                                                                                                  (ReasonReact.string(option.name))
                                                                                                                  (ReasonReact.string(option.quantity))
                                                                                                                  (ReasonReact.string(option.price))
                                                                                                                 </button>

                                                                                                                 </li>
              }
};

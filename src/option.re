open Action;

let component = ReasonReact.statelessComponent("Option");

let make = (~data:option(Type.product_option), ~send, _children) => {
  ...component,
  render: _self =>
         switch (data) {
              | Some(option) =>   <li className = "product-option">
                                                                                                                 <button  onClick=(_event => send(SELECTOPTION(option))) >
                                                                                                                  (ReasonReact.string(option.name))
                                                                                                                 </button>
                                                                                                                 </li>
              }
};

let component = ReasonReact.statelessComponent("Menubar");

let make = (~categories:Type.categories, ~send, _children) => {
  ...component,
  render: _self =>
    <div className = "category-bar">

    <div className = "logo-container">
    <img  className = "logo" alt = "logo" />
    </div>

<div id="mobile-btn">
		<div id="top"></div>
		<div id="middle"></div>
		<div id="bottom"></div>
</div>


   <Categorymenu name = "category-menu" items = categories send = send  />


    </div>
};

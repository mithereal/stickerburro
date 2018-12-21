[@bs.module] external logo : string = "./logo.svg";

let component = ReasonReact.statelessComponent("Menubar");

let make = (~usermenu, ~categories, _children) => {
  ...component,
  render: _self =>
    <div className="menubar">

    <div className="logo-container">
    <img src=logo className="logo" alt="logo" />
    </div>

   <Menu name="category-menu", ~items=usermenu />


    <div className="user-menu">
    <nav id="user-menu" title="user-menu">
    <ul>

    </ul>
    </nav>

    </div>

    </div>
};

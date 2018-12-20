[@bs.module] external logo : string = "./logo.svg";

let component = ReasonReact.statelessComponent("Topbar");

let make = (_children) => {
  ...component,
  render: _self =>
    <div className="Menu">

    <div className="Logo-container">
    <img src=logo className="App-logo" alt="logo" />
    </div>

    <nav className="Category-menu">
    <ul>

    <Li i="Stickers" text="Stickers" c="" />
    <Li i="Labels" text="Labels" c="" />
    <Li i="Magnets" text="Magnets" c="" />
    <Li i="Buttons" text="Buttons" c="" />
    <Li i="Packaging" text="Packaging" c="" />

    </ul>
    </nav>

    <div className="User-info-container">
    <nav>
    <ul>

     <Li i="Login" text="Login" c="" />
     <Li i="Sign-up" text="Sign-up" c="" />

    </ul>
    </nav>

    </div>

    </div>
};

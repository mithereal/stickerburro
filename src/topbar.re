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

    <Li id="Stickers" text="Stickers" class="" />
    <Li id="Labels" text="Labels" class="" />
    <Li id="Magnets" text="Magnets" class="" />
    <Li id="Buttons" text="Buttons" class="" />
    <Li id="Packaging" text="Packaging" class="" />

    </ul>
    </nav>

    <div className="User-info-container">
    <ul>

     <Li id="Login" text="Login" class="" />
     <Li id="Sign-up" text="Sign-up" class="" />

    </ul>

    </div>

    </div>
};

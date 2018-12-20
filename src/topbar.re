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
    <li>
    (ReasonReact.string("Stickers"))
    </li>
    <li>
    (ReasonReact.string("Labels"))
    </li>
    <li>
    (ReasonReact.string("Magnets"))
    </li>
    <li>
    (ReasonReact.string("Buttons"))
    </li>
    <li>
    (ReasonReact.string("Packaging"))
    </li>
    </ul>
    </nav>
    </div>
};

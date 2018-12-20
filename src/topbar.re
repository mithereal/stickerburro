[@bs.module] external logo : string = "./logo.svg";

let component = ReasonReact.statelessComponent("Topbar");

let make = (_children) => {
  ...component,
  render: _self =>
    <div className="Menu">
    <div className="Logo-container">
    <img src=logo className="App-logo" alt="logo" />
    </div>
    <nav>
    <ul>
    <li>
    (ReasonReact.string("Stickers"))
    </li>
    </ul>
    </nav>
    </div>
};

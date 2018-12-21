[%bs.raw {|require('./app.css')|}];

let component = ReasonReact.statelessComponent("App");

let make = (_children) => {
  ...component,
  render: _self =>
    <div className="App">
      <Menubar usermenu= Data.usermenu, ~categories= Data.topmenu />
      <Page />
      <Footer />
    </div>
};

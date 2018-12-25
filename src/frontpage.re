let component = ReasonReact.statelessComponent("Frontpage");

let make = (_children) => {
  ...component,
  render: _self =>
    <div>
    <Header />
    <Featured />
    <Video />
    </div>
};

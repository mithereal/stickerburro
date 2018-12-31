let component = ReasonReact.statelessComponent("Frontpage");

let make = (_children) => {
  ...component,
  render: _self =>
    <>
    <Header />
    <Featured />
    <Video />
    </>
};

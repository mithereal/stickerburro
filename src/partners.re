let component = ReasonReact.statelessComponent("Partners");

let make = (_children) => {
  ...component,
  render: _self =>
    <div className = "partners">

<Partner name = "Github.com" logo = "/github.svg"/>
<Partner name = "AZHG.com" logo = "/azhg.svg"/>
<Partner name = "Movers.io" logo = "/movers.svg"/>

</div>
};

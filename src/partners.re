let component = ReasonReact.statelessComponent("Partners");

let make = (_children) => {
  ...component,
  render: _self =>
    <div className="partners">
<ul>
<li>
<Partner name="test" logo="/test.svg"/>
</li>
</ul>
</div>
};

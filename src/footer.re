let component = ReasonReact.statelessComponent("Footer");

let make = (_children) => {
  ...component,
  render: _self =>
    <div className="Footer">

    <nav className="Footer-menu">

    <ul>

    <Li i="About" text="About" c="" />
    <Li i="Blog" text="Blog" c="" />
    <Li i="Uses" text="Uses" c="" />
    <Li i="Templates" text="Templates" c="" />
    <Li i="Gift cards" text="Gift cards" c="" />
    <Li i="FAQs" text="FAQs" c="" />
    <Li i="Returns" text="Returns" c="" />
    <Li i="Contact" text="Contact" c="" />

    </ul>

    </nav>

    </div>
};

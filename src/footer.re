let component = ReasonReact.statelessComponent("Footer");

let make = (_children) => {
  ...component,
  render: _self =>
    <div className="Footer">

    <nav className="Footer-menu">

    <ul>

    <Li id="About" text="About" class="" />
    <Li id="Blog" text="Blog" class="" />
    <Li id="Uses" text="Uses" class="" />
    <Li id="Templates" text="Templates" class="" />
    <Li id="Gift cards" text="Gift cards" class="" />
    <Li id="FAQs" text="FAQs" class="" />
    <Li id="Returns" text="Returns" class="" />
    <Li id="Contact" text="Contact" class="" />

    </ul>

    </nav>

    </div>
};

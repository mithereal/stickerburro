let component = ReasonReact.statelessComponent("Menu Item");


type category = {
id: string,
name: string,
url: string,
image: string,
description: string
};

type action =
| CATEGORY(category)

let make = (~data, ~send,  _children) => {
  ...component,
  render: _self =>
    <li id = data.name className = "menu-item" onClick=(_event => send(CATEGORY(data))) >

    </li>
};

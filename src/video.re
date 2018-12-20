let component = ReasonReact.statelessComponent("Video");

let make = (_children) => {
  ...component,
  render: _self =>
    <div className="Video">
     <div className="Video-block">
     </div>
     <div className="Video-text">
     </div>
     <Partners />
    </div>
};

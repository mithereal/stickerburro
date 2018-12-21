let component = ReasonReact.statelessComponent("Video");

let make = (_children) => {
  ...component,
  render: _self =>
    <div className = "video">
     <div className = "video-block">
     </div>
     <div className = "video-text">
     </div>
     <Partners />
    </div>
};

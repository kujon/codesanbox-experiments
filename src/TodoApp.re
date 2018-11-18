let component = ReasonReact.statelessComponent("TodoApp");

let make = _children => {
  ...component,
  render: _self =>
    <div className="app">
      <div className="title">
        {ReasonReact.stringToElement("Hello CodeSandbox")}
      </div>
      <div className="items"> {ReasonReact.stringToElement("I should try Reason")} </div>
    </div>
};

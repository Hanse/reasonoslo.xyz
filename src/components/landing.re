let component = ReasonReact.statelessComponent "Landing";

let make _children => {
  ...component,
  render: fun _self =>
    <Page>
      <div className=(Styles.make textAlign::"center" () |> Styles.className)>
        <img src="/static/logo.png" alt="Reason Oslo" width="300" />
        <header> (ReasonReact.stringToElement "Reason Oslo Meetup") </header>
        <p>
          (ReasonReact.stringToElement "Follow us on ")
          <a href="https://twitter.com/reasonoslo">
            (ReasonReact.stringToElement "Twitter")
          </a>
          (ReasonReact.stringToElement ".")
        </p>
        <Resources />
      </div>
    </Page>
};

let jsComponent =
  ReasonReact.wrapReasonForJs ::component (fun _jsProps => make [||]);

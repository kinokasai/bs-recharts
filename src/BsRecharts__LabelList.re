[@bs.module "recharts"]
external reactClass: ReasonReact.reactClass = "LabelList";

[@bs.obj]
external makeProps:
  (
    ~dataKey: 'dataKey,
    ~position: [@bs.string] [ |`inside | `top ]=?,
    unit
  ) =>
  _ =
  "";

let make =
  (
    ~dataKey,
    ~position=?,
    children
  ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~dataKey,
        ~position?,
        ()
      ),
      children,
  );
/* @generated */

module Types = {};

type response = unit;
type refetchVariables = {
  groupId: option(string),
  onlineStatuses: option(array(SchemaAssets.Enum_OnlineStatus.t)),
  count: option(int),
  cursor: option(string),
};
let makeRefetchVariables =
    (~groupId=?, ~onlineStatuses=?, ~count=?, ~cursor=?, ()): refetchVariables => {
  groupId,
  onlineStatuses,
  count,
  cursor,
};
type variables = {
  groupId: string,
  onlineStatuses: option(array(SchemaAssets.Enum_OnlineStatus.t)),
  count: option(int),
  cursor: option(string),
};

module FragmentConverters: {
  let response_getFragments:
    response =>
    {
      .
      "__$fragment_ref__TestPagination_query": TestPagination_query_graphql.t,
    };
} = {
  external response_getFragments:
    response =>
    {
      .
      "__$fragment_ref__TestPagination_query": TestPagination_query_graphql.t,
    } =
    "%identity";
};

module Internal = {
  type responseRaw;
  let responseConverter: Js.Dict.t(array((int, string))) = [%raw {| {} |}];
  let responseConverterMap = ();
  let convertResponse = v =>
    v
    ->ReasonRelay._convertObj(
        responseConverter,
        responseConverterMap,
        Js.undefined,
      );

  let variablesConverter: Js.Dict.t(array((int, string))) = [%raw
    {| {"onlineStatuses":[[0,""],[2,"enum_OnlineStatus"]],"count":[[0,""]],"cursor":[[0,""]]} |}
  ];
  let variablesConverterMap = {
    "enum_OnlineStatus": SchemaAssets.Enum_OnlineStatus.wrap,
  };
  let convertVariables = v =>
    v
    ->ReasonRelay._convertObj(
        variablesConverter,
        variablesConverterMap,
        Js.undefined,
      );
};

type operationType = ReasonRelay.queryNode;

let node: operationType = [%bs.raw
  {| (function(){
var v0 = [
  {
    "kind": "LocalArgument",
    "name": "groupId",
    "type": "ID!",
    "defaultValue": null
  },
  {
    "kind": "LocalArgument",
    "name": "onlineStatuses",
    "type": "[OnlineStatus!]",
    "defaultValue": null
  },
  {
    "kind": "LocalArgument",
    "name": "count",
    "type": "Int",
    "defaultValue": 2
  },
  {
    "kind": "LocalArgument",
    "name": "cursor",
    "type": "String",
    "defaultValue": ""
  }
],
v1 = {
  "kind": "Variable",
  "name": "groupId",
  "variableName": "groupId"
},
v2 = {
  "kind": "Variable",
  "name": "onlineStatuses",
  "variableName": "onlineStatuses"
},
v3 = [
  {
    "kind": "Variable",
    "name": "after",
    "variableName": "cursor"
  },
  {
    "kind": "Variable",
    "name": "first",
    "variableName": "count"
  },
  (v1/*: any*/),
  (v2/*: any*/)
],
v4 = {
  "kind": "ScalarField",
  "alias": null,
  "name": "id",
  "args": null,
  "storageKey": null
},
v5 = {
  "kind": "ScalarField",
  "alias": null,
  "name": "firstName",
  "args": null,
  "storageKey": null
},
v6 = [
  {
    "kind": "Literal",
    "name": "first",
    "value": 1
  }
];
return {
  "kind": "Request",
  "fragment": {
    "kind": "Fragment",
    "name": "TestPaginationRefetchQuery",
    "type": "Query",
    "metadata": null,
    "argumentDefinitions": (v0/*: any*/),
    "selections": [
      {
        "kind": "FragmentSpread",
        "name": "TestPagination_query",
        "args": [
          {
            "kind": "Variable",
            "name": "count",
            "variableName": "count"
          },
          {
            "kind": "Variable",
            "name": "cursor",
            "variableName": "cursor"
          },
          (v1/*: any*/),
          (v2/*: any*/)
        ]
      }
    ]
  },
  "operation": {
    "kind": "Operation",
    "name": "TestPaginationRefetchQuery",
    "argumentDefinitions": (v0/*: any*/),
    "selections": [
      {
        "kind": "LinkedField",
        "alias": null,
        "name": "members",
        "storageKey": null,
        "args": (v3/*: any*/),
        "concreteType": "MemberConnection",
        "plural": false,
        "selections": [
          {
            "kind": "LinkedField",
            "alias": null,
            "name": "edges",
            "storageKey": null,
            "args": null,
            "concreteType": "MemberEdge",
            "plural": true,
            "selections": [
              {
                "kind": "LinkedField",
                "alias": null,
                "name": "node",
                "storageKey": null,
                "args": null,
                "concreteType": null,
                "plural": false,
                "selections": [
                  {
                    "kind": "ScalarField",
                    "alias": null,
                    "name": "__typename",
                    "args": null,
                    "storageKey": null
                  },
                  (v4/*: any*/),
                  {
                    "kind": "InlineFragment",
                    "type": "User",
                    "selections": [
                      (v5/*: any*/),
                      {
                        "kind": "LinkedField",
                        "alias": null,
                        "name": "friendsConnection",
                        "storageKey": "friendsConnection(first:1)",
                        "args": (v6/*: any*/),
                        "concreteType": "UserConnection",
                        "plural": false,
                        "selections": [
                          {
                            "kind": "ScalarField",
                            "alias": null,
                            "name": "totalCount",
                            "args": null,
                            "storageKey": null
                          }
                        ]
                      }
                    ]
                  },
                  {
                    "kind": "InlineFragment",
                    "type": "Group",
                    "selections": [
                      {
                        "kind": "ScalarField",
                        "alias": null,
                        "name": "name",
                        "args": null,
                        "storageKey": null
                      },
                      {
                        "kind": "LinkedField",
                        "alias": null,
                        "name": "adminsConnection",
                        "storageKey": "adminsConnection(first:1)",
                        "args": (v6/*: any*/),
                        "concreteType": "UserConnection",
                        "plural": false,
                        "selections": [
                          {
                            "kind": "LinkedField",
                            "alias": null,
                            "name": "edges",
                            "storageKey": null,
                            "args": null,
                            "concreteType": "UserEdge",
                            "plural": true,
                            "selections": [
                              {
                                "kind": "LinkedField",
                                "alias": null,
                                "name": "node",
                                "storageKey": null,
                                "args": null,
                                "concreteType": "User",
                                "plural": false,
                                "selections": [
                                  (v4/*: any*/),
                                  (v5/*: any*/)
                                ]
                              }
                            ]
                          }
                        ]
                      }
                    ]
                  }
                ]
              },
              {
                "kind": "ScalarField",
                "alias": null,
                "name": "cursor",
                "args": null,
                "storageKey": null
              }
            ]
          },
          {
            "kind": "LinkedField",
            "alias": null,
            "name": "pageInfo",
            "storageKey": null,
            "args": null,
            "concreteType": "PageInfo",
            "plural": false,
            "selections": [
              {
                "kind": "ScalarField",
                "alias": null,
                "name": "endCursor",
                "args": null,
                "storageKey": null
              },
              {
                "kind": "ScalarField",
                "alias": null,
                "name": "hasNextPage",
                "args": null,
                "storageKey": null
              }
            ]
          },
          {
            "kind": "ClientExtension",
            "selections": [
              {
                "kind": "ScalarField",
                "alias": null,
                "name": "__$generated__connection__key__$$__TestPagination_query_members$$$name__$$__members",
                "args": null,
                "storageKey": null
              }
            ]
          }
        ]
      },
      {
        "kind": "LinkedHandle",
        "alias": null,
        "name": "members",
        "args": (v3/*: any*/),
        "handle": "connection",
        "key": "TestPagination_query_members",
        "filters": [
          "groupId",
          "onlineStatuses"
        ]
      }
    ]
  },
  "params": {
    "operationKind": "query",
    "name": "TestPaginationRefetchQuery",
    "id": null,
    "text": "query TestPaginationRefetchQuery(\n  $groupId: ID!\n  $onlineStatuses: [OnlineStatus!]\n  $count: Int = 2\n  $cursor: String = \"\"\n) {\n  ...TestPagination_query_2z6KWr\n}\n\nfragment TestPagination_query_2z6KWr on Query {\n  members(groupId: $groupId, onlineStatuses: $onlineStatuses, first: $count, after: $cursor) {\n    edges {\n      node {\n        __typename\n        ... on User {\n          id\n          firstName\n          friendsConnection(first: 1) {\n            totalCount\n          }\n        }\n        ... on Group {\n          id\n          name\n          adminsConnection(first: 1) {\n            edges {\n              node {\n                id\n                firstName\n              }\n            }\n          }\n        }\n        ... on Node {\n          id\n        }\n      }\n      cursor\n    }\n    pageInfo {\n      endCursor\n      hasNextPage\n    }\n  }\n}\n",
    "metadata": {
      "derivedFrom": "TestPagination_query",
      "isRefetchableQuery": true
    }
  }
};
})() |}
];
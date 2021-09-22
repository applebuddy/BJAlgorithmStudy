//
//  그래프_1043.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/09/22.
//  Copyright © 2021 MungGu. All rights reserved.
//

// MARK: - 거짓말 1043, Union Find 문제풀이

/*
let readInput: (() -> [Int]) = {
  var result: [Int] = []
  var temp = 0
  readLine()!.forEach {
    if $0 == " " {
      result.append(temp)
      temp = 0
      return
    }

    temp = temp * 10 + Int($0.asciiValue!) - 48
  }
  result.append(temp)
  return result
}

func getParent(_ node: Int, _ parents: inout [Int]) -> Int {
  if parents[node] == node { return node }
  return getParent(parents[node], &parents)
}

func mergeParent(_ node: Int, _ node2: Int, _ parents: inout [Int]) {
  let a = getParent(node, &parents)
  let b = getParent(node2, &parents)
  if a < b {
    parents[b] = a
  } else {
    parents[a] = b
  }
}

let ip = readInput()
let (N, M) = (ip[0], ip[1])
let ip2 = readInput()
var knowList: [Int] = []
var G: [[Int]] = []
var parents = Array(0...N)
for idx in 1..<ip2.count {
  knowList.append(ip2[idx])
}

(0..<M).forEach { _ in
  let ip3 = readInput()
  let nowList = Array(ip3[1..<ip3.count])
  G.append(nowList)
  var prev = 0
  nowList.enumerated().forEach { (index, target) in
    if index == 0 { prev = target; return }
    mergeParent(prev, target, &parents)
    prev = target
  }
}

print((G.indices).reduce(into: 0) { (answer, idx) in
  var canGura = true
  for jdx in G[idx].indices {
    for target in knowList {
      if getParent(G[idx][jdx], &parents) == getParent(target, &parents) {
        canGura = false; break
      }
    }
    if canGura == false { break }
  }
  answer += canGura ? 1 : 0
})
*/

//
//  음악프로그램_2623.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/01/03.
//  Copyright © 2021 MungGu. All rights reserved.
//

/*
import Foundation

let ip: (() -> [Int]) = {
  let S = readLine()!
  var tmp = 0
  var result: [Int] = []
  S.forEach {
    if $0 == " " {
      result.append(tmp)
      tmp = 0
      return
    }
    tmp = tmp * 10 + Int($0.unicodeScalars.first!.value) - 48
  }
  result.append(tmp)
  return result
}

let arr = ip()
let (N, M) = (arr[0], arr[1])
var G = [[Int]](repeating: [Int](), count: N+1)
var C = [Int](repeating: 0, count: N+1)
(0..<M).forEach { _ in
  let arr2 = ip()
  let len = arr2[0]
  for idx in 1..<len {
    let from = arr2[idx]
    let to = arr2[idx+1]
    G[from].append(to)
    C[to] += 1
  }
}

var Q: [Int] = []
var cur = 0
(1...N).forEach { node in
  if C[node] == 0 {
    Q.append(node)
  }
}

var result: [Int] = []
while cur < Q.count {
  let node = Q[cur]
  cur += 1
  result.append(node)
  for idx in G[node].indices {
    let next = G[node][idx]
    C[next] -= 1
    if C[next] == 0 {
      Q.append(next)
    }
  }
}

if result.count != N { print(0); exit(0) }
print(result.map { "\($0)" }.joined(separator: "\n"))
*/


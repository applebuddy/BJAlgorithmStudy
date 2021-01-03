//
//  main.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/01/01.
//  Copyright © 2021 MungGu. All rights reserved.
//

let N = Int(readLine()!)!
let len = 8
var G = [[Int]](repeating: [Int](), count: len)
var DP = [[Int]](repeating: [Int](repeating: -1, count: 100001), count: 10)
let rem = Int(1e9)+7
G[0] = [1, 4]
G[1] = [0, 2, 5]
G[2] = [1, 5, 6, 3]
G[3] = [2, 6, 7]
G[4] = [0, 5]
G[5] = [1, 2, 4, 6]
G[6] = [5, 2, 3, 7]
G[7] = [3, 6]

func DFS(_ node: Int, _ time: Int) -> Int {
  if time == N {
    return node == 7 ? 1 : 0
  }

  let now = DP[node][time]
  if now != -1 { return now }

  var total = 0
  for idx in G[node].indices {
    let next = G[node][idx]
    total += DFS(next, time+1)
    total %= rem
  }
  DP[node][time] = total % rem
  return DP[node][time]
}

print(DFS(7, 0))

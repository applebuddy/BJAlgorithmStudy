//
//  FourSquares_17626.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/01/03.
//  Copyright © 2021 MungGu. All rights reserved.
//

/*
let N = Int(readLine()!)!
var G = [Int]()
var DP = [Int](repeating: 0, count: 51000)
DP[1] = 1
var num = 1
while num < 225 {
  G.append(num * num)
  num += 1
}

for tgt in 2...N {
  var mn = Int.max
  var jdx = 0
  while G[jdx] <= tgt {
    let rem = tgt - G[jdx]
    mn = mn > DP[rem] ? DP[rem] : mn
    jdx += 1
  }
  DP[tgt] = mn + 1
}

print(DP[N])
*/

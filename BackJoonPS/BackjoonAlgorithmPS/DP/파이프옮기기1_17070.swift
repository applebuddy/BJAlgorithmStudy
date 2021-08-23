//
//  파이프옮기기1_17070.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/08/24.
//  Copyright © 2021 MungGu. All rights reserved.
//

// MARK: - 파이프옮기기 1 DP 문제풀이

/*
let N = Int(readLine()!)!
var G = [[String]]()
(1...N).forEach { _ in
  G.append(readLine()!.split(separator: " ").map { String($0) })
}

typealias Tuple = (h: Int, v: Int, c: Int)
var DP = [[Tuple]](repeating: [Tuple](repeating: (0, 0, 0), count: N), count: N)
DP[0][1].h = 1
let range = 0..<N

for x in range.indices {
  for y in range.indices {
    if G[x][y] == "1" || (x == 0 && y == 1) {
      continue
    }

    if x > 0 {
      DP[x][y].v = DP[x-1][y].v + DP[x-1][y].c
    }

    if y > 0 {
      DP[x][y].h = DP[x][y-1].h + DP[x][y-1].c
    }

    if x > 0 && y > 0 && G[x-1][y] == "0" && G[x][y-1] == "0" {
      DP[x][y].c = DP[x-1][y-1].v + DP[x-1][y-1].h + DP[x-1][y-1].c
    }
  }
}

print(DP.last!.last!.v + DP.last!.last!.h + DP.last!.last!.c)
*/

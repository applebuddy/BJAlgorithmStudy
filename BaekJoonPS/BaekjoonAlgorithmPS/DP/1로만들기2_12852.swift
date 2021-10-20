//
//  1로만들기2_12852.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/01/06.
//  Copyright © 2021 MungGu. All rights reserved.
//

/*
import Foundation

var N = Int(readLine()!)!
var Ans = [Int]()
let len = 1000001
var dp = [Int](repeating: 0, count: len)
var prev = [Int](repeating: 0, count: len)

func solve(_ n: Int) -> Int {
  if n == 1 {
    print(0, 1, separator: "\n")
    exit(0)
  }
  dp[1] = 0
  prev[1] = -1
  for idx in 2...n {
    dp[idx] = dp[idx-1] + 1
    prev[idx] = idx-1
    
    if idx % 2 == 0 && dp[idx] > dp[idx/2] + 1 {
      dp[idx] = dp[idx/2] + 1
      prev[idx] = idx/2
    }

    if idx % 3 == 0 && dp[idx] > dp[idx/3] + 1 {
      dp[idx] = dp[idx/3] + 1
      prev[idx] = idx/3
    }
  }
  return dp[n]
}

print(solve(N))
while N != -1 {
  Ans.append(N)
  N = prev[N]
}

print(Ans.map { "\($0)" }.joined(separator: " "))
*/

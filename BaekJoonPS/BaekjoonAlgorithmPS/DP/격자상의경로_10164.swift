//
//  격자상의경로_10164.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/27.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 격자상의 경로 10164
// MARK: DP swift 문제풀이

/*
import Foundation

let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], M = arr[1], K = arr[2]
var DP = [[Int]](repeating: [Int](repeating: 0, count: M+1), count: N+1)
var flag = N * M >= K && K != 0
var idx: (Int, Int) = (N, M)
if flag {
    idx.0 = (K-1) / M + 1
    idx.1 = K % M == 0 ? M : K % M
}

DP[0][1] = 1
for i in 1...idx.0 {
    for j in 1...idx.1 {
        DP[i][j] = DP[i-1][j] + DP[i][j-1]
    }
}

if !flag { print(DP[idx.0][idx.1]); exit(0) }

for i in idx.0...N {
    for j in idx.1...M {
        if i-1 >= idx.0 { DP[i][j] += DP[i-1][j] }
        if j-1 >= idx.1 { DP[i][j] += DP[i][j-1] }
    }
}

print(DP[N][M])
*/

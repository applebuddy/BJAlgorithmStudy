//
//  LCS2_9251.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/26.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - LCS2 9252
// MARK: LCS DP 문제풀이

/*
import Foundation

var S = Array(readLine()!)
var S2 = Array(readLine()!)
let len = S.count;
let len2 = S2.count;

var DP = [[Int]](repeating: [Int](repeating: 0, count: len2+1), count: len+1)
var DP2 = [[String]](repeating: [String](repeating: "", count: len2+1), count: len+1)

for i in 1...len {
    for j in 1...len2 {
        if S[i-1] == S2[j-1] {
            DP[i][j] = DP[i-1][j-1] + 1
            DP2[i][j] = "\(DP2[i-1][j-1])\(S[i-1])"
        } else {
            if DP[i-1][j] > DP[i][j-1] {
                DP[i][j] = DP[i-1][j]
                DP2[i][j] = DP2[i-1][j]
            } else {
                DP[i][j] = DP[i][j-1]
                DP2[i][j] = DP2[i][j-1]
            }
        }
    }
}

print("\(DP[len][len2])\n\(DP2[len][len2])")
*/

//
//  LCS_9251.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/26.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - LCS 9251
// MARK: LCS DP swift 문제풀이

/*
import Foundation

let arr = Array(readLine()!)
let arr2 = Array(readLine()!)
let len = arr.count, len2 = arr2.count

var DP = [[Int]](repeating: [Int](repeating: 0, count: len2+1), count: len+1)
var MAX = 0
for i in 1...len {
    for j in 1...len2 {
        if arr[i-1] == arr2[j-1] { DP[i][j] = DP[i-1][j-1] + 1 }
        else { DP[i][j] = max(DP[i-1][j], DP[i][j-1]) }
    }
}

print(DP[len][len2])
*/

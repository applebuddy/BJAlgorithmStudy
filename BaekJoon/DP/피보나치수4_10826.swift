//
//  피보나치수4_10826.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/12.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 피보나치수4 10826
// MARK: DP swift 문제풀이

/*
import Foundation
let N = Int(readLine()!)!

if N == 0 { print(0); exit(0) }
else if N <= 2 { print(1); exit(0) }
var prev = [Int](repeating: 0, count: 10001)
var result = [Int](repeating: 0, count: 10001)
prev[prev.count-1] = 1
var pprev = prev

func sumArr(_ A: [Int], _ B: [Int]) -> [Int] {
    var result = [Int](repeating: 0, count: 10001)
    var idx = A.count - 1
    var rem = 0
    while idx >= 0 {
        result[idx] = (A[idx] + B[idx] + rem) % 10
        rem = (A[idx] + B[idx] + rem) / 10
        idx -= 1
    }
    return result
}

for _ in 3...N {
    result = sumArr(prev, pprev)
    pprev = prev
    prev = result
}

var S = ""
var flag = false
for i in result.indices {
    if result[i] != 0 && flag == false {
        flag = true
    }
    if flag {
        S += "\(result[i])"
    }
}

print(S)
*/

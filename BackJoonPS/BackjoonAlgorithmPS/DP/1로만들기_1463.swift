//
//  1로만들기_1463.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/27.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 1로만들기
// MARK: DP swift 문제풀이 + 복습 1회

let N = Int(readLine()!)!

var cache = [Int](repeating: 0, count: Int(1e6) + 1)
func go(_ n: Int) -> Int {
    if cache[n] > 0 { return cache[n] }
    if n == 1 { return 0 }
    if n == 2 { return 1 }

    var minValue = go(n - 1) + 1

    if n % 3 == 0 {
        minValue = min(minValue, go(n / 3) + 1)
    }
    
    if n % 2 == 0 {
        minValue = min(minValue, go(n / 2) + 1)
    }

    cache[n] = minValue
    return minValue
}

print(go(N))

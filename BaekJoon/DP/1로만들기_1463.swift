//
//  1로만들기_1463.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/27.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 1로만들기
// MARK: DP swift 문제풀이

/*
import Foundation

let N = Int(readLine()!)!

var DP = [Int](repeating: 0, count: 1000001)
DP[1] = 0
func go(_ N: Int) -> Int {
    if DP[N]>0 || N==1 { return DP[N] }
    
    var Ans = go(N-1) + 1
    if N % 3 == 0 {
        Ans = min(Ans, go(N/3) + 1)
    }
    if N % 2 == 0 {
        Ans = min(Ans, go(N/2) + 1)
    }
    DP[N] = Ans
    return DP[N]
}

print(go(N))
*/

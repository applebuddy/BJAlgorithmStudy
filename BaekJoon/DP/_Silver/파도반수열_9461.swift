//
//  파도반수열_9461.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/10.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 파도반수열 9461
// MARK: - DP 문제풀이
/*
import Foundation

let T = Int(readLine()!)!
var DP = [Int](repeating: 0, count: 101)
for i in 1...3 {
    DP[i] = 1
}

func getPadovan(_ N: Int) -> Int {
    if DP[N]>0 || N<=3 { return DP[N] }
    DP[N] = getPadovan(N-2) + getPadovan(N-3)
    return DP[N]
}

for _ in 0..<T {w
    let N = Int(readLine()!)!
    print(getPadovan(N))
}
*/

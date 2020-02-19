//
//  2xN타잍링2_11727.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/19.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: DP 문제풀이
/*
import Foundation

var DP = [Int](repeating: 0, count: 1001)
let N = Int(readLine()!)!
DP[0] = 0
DP[1] = 1
DP[2] = 3
if N < 3 { print(DP[N]); exit(0) }
for i in 3...N {
    DP[i] = (DP[i-2]*2 + DP[i-1]) % 10007
}

print(DP[N] % 10007)
*/

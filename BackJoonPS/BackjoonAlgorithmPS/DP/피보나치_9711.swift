//
//  피보나치_9711.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/12.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 피보나치 9711
// MARK: DP swift 문제풀이

/*
import Foundation

let T = Int(readLine()!)!
var DP = [Int](repeating: 0, count: 10001)
DP[1] = 1; DP[2] = 1
var P = 0, Q = 0

func getFib(_ N: Int) -> Int {
    if DP[N] > 0 || N <= 2 { return DP[N] }
    DP[N] = (getFib(N-1) + getFib(N-2)) % 2000000000
    return DP[N]
}

for i in 1...T {
    let arr = readLine()!.split(separator: " ").map { Int($0)! }
    P = arr[0]; Q = arr[1]
    print("Case #\(i): \(getFib(P) % Q)")
}
*/

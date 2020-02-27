//
//  팰린드롬?_10942.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/27.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 팰린드롬? 10942
// MARK: DP swift TLE 답안
/*
import Foundation

let len = Int(readLine()!)!
let arr = readLine()!.split(separator: " ").map { Int($0)! }
var DP = [[Int]](repeating: [Int](repeating: 0, count: len), count: len)
for i in arr.indices {
    DP[i][i] = 1
    var width = 0
    while i-width-1 >= 0 && i+width+1 < len && arr[i-width-1] == arr[i+width+1] {
        DP[i-width-1][i+width+1] = 1
        width += 1
    }
}

let T = Int(readLine()!)!
for _ in 0..<T {
    let q = readLine()!.split(separator: " ").map { Int($0)! }
    print("\(DP[q[0]-1][q[1]-1])")
}
*/

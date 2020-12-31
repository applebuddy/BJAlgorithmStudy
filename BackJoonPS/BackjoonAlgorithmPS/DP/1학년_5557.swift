//
//  1학년_5557.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/11.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 1학년 5557
// MARK: - DP(Top-Down) 문제풀이
/*
import Foundation

let N = Int(readLine()!)!
let arr = readLine()!.split(separator: " ").map { Int($0)! }
var DP = [[Int]](repeating: [Int](repeating: -1, count: 21), count: 101)
func DFS(_ idx: Int, _ sum: Int) -> Int {
    if idx == arr.count-1 {
        return sum == arr.last! ? 1 : 0
    }
    
    if DP[idx][sum] != -1 { return DP[idx][sum] }
    DP[idx][sum] = 0
    
    if sum + arr[idx] <= 20 {
        DP[idx][sum] += DFS(idx + 1, sum + arr[idx])
    }
    
    if sum - arr[idx] >= 0 {
        DP[idx][sum] += DFS(idx + 1, sum - arr[idx])
    }
    
    return DP[idx][sum]
}

print(DFS(1, arr.first!))
*/

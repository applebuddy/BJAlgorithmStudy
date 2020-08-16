//
//  2차원배열의합_2167.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/13.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 2차원배열의합 2167

// MARK: (문제풀이 * DP 미사용)

/*
 import Foundation

 let arr = readLine()!.split(separator: " ").map { Int($0)! }
 let N = arr[0], M = arr[1]
 var G = [[Int]](repeating: [Int](), count: N)

 for i in 0..<N {
 G[i] = readLine()!.split(separator: " ").map { Int($0)! }
 }

 let T = Int(readLine()!)!

 for _ in 0..<T {
 let arr2 = readLine()!.split(separator: " ").map { Int($0)! }
 let start = (arr2[0]-1, arr2[1]-1)
 let end = (arr2[2]-1, arr2[3]-1)

 var Ans = 0
 for i in start.0...end.0 {
     for j in start.1...end.1 {
         Ans += G[i][j]
     }
 }
 print(Ans)
 }
 */

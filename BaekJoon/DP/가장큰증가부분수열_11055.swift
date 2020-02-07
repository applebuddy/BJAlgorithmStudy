//
//  가장큰증가부분수열_11055.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/07.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 가장 큰 증가하는 부분수열 11055

// MARK: - DP 문제풀이

/*
 import Foundation

 let N = Int(readLine()!)
 let arr = readLine()!.split(separator: " ").map { Int($0)! }
 var DP = arr
 var Len = [Int](repeating: 1, count: arr.count)

 for i in 1..<arr.count {
 for j in 0..<i {
     if DP[j] < DP[i] && Len[i] < Len[j] + 1 {
         Len[i] = Len[j] + 1
         DP[i] = max(DP[i], DP[j]+arr[i])
     }
 }
 }

 print(DP.max()!)
 */

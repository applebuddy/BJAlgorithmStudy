//
//  가장긴감소하는부분수열_11722.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/07.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 가장 긴 감소하는 부분수열

// MARK: - LDS 문제풀이 NLogN 답안

/*
 import Foundation

 extension Array where Element == Int {
 func lower_bound(_ val: Int) -> Int {
     var left = 0, right = self.count-1
     while left <= right {
         let mid = (left + right) / 2
         if self[mid] >= val {
             right = mid - 1
         } else {
             left = mid + 1
         }
     }
     return right + 1
 }
 }

 let N = Int(readLine()!)
 let arr = readLine()!.split(separator: " ").map { Int($0)! }
 var Ans = [Int]()
 var idx = arr.count - 1
 while idx >= 0 {
 let low = Ans.lower_bound(arr[idx])
 if low == Ans.count {
     Ans.append(arr[idx])
 } else {
     Ans[low] = arr[idx]
 }
 idx -= 1
 }

 print(Ans.count)
 */

// MARK: - DP N^2 풀이 답안

/*
 import Foundation

 let N = Int(readLine()!)
 let arr = readLine()!.split(separator: " ").map { Int($0)! }
 var SV = Array(arr.reversed())
 var DP = [Int](repeating: 1, count: SV.count)

 for i in 1..<SV.count {
 for j in 0..<i {
     if SV[j] < SV[i] && DP[i] <= DP[j] + 1 {
         DP[i] = DP[j] + 1
     }
 }
 }

 print(DP.max()!)
 */

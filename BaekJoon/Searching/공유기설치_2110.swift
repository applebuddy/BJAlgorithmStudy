//
//  공유기설치_2110.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/01/31.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 공유기설치_2110

// MARK: - 이진탐색 활용 문제풀이

/*
 import Foundation

 let arr = readLine()!.split(separator: " ").map { Int($0)! }
 let N = arr[0], C = arr[1]
 var V = [Int](repeating: 0, count: N)
 for i in 0..<N {
 let num = Int(readLine()!)!
 V[i] = num
 }

 V.sort()

 var left = 0, right = V.last!, Ans = 0
 while left <= right {
 let mid = (left + right) / 2
 var now = V[0], cnt = 1
 for i in 1..<V.count {
     if V[i] - now >= mid {
         cnt += 1
         now = V[i]
     }
 }

 if cnt >= C {
     left = mid + 1
     Ans = Ans < mid ? mid : Ans
 } else {
     right = mid - 1
 }
 }

 print(Ans)
 */

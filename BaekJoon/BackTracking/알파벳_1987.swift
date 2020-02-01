//
//  알파벳_1987.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/01/29.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 알파벳_1987

// MARK: - 시간초과 답안

/*
 import Foundation

 let arr0 = readLine()!.split(separator: " ").map { Int($0)! }
 let arr1 = readLine()!.split(separator: " ").map { Int($0)! }
 let N = arr0[0], M = arr0[1]
 var maxH = 0
 var trees = [Int](repeating: 0, count: N)

 for i in arr1.indices {
 trees[i] = arr1[i]
 maxH = trees[i] > maxH ? trees[i] : maxH
 }

 var left = 1, right = maxH-1, Ans = 0
 while left <= right {
 let mid = (left + right) / 2
 var tot = 0
 for i in trees.indices {
     if trees[i] > mid {
         tot += trees[i] - mid
     }
 }

 if tot >= M {
     left = mid + 1
     Ans = Ans < mid ? mid : Ans
     print(Ans)
 } else {
     right = mid - 1
 }
 }

 print(Ans)

 */

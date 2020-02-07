//
//  주사위네개_2484.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/07.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 주사위네개 2484

// MARK: - 문제풀이

/*
 import Foundation

 let N = Int(readLine()!)!
 var Ans = 0

 for _ in 0..<N {
 let arr = readLine()!.split(separator: " ").map { Int($0)! }
 var dic = [Int:Int]()
 var score = 0
 for i in arr.indices
 {
     dic[arr[i]] = (dic[arr[i]] ?? 0) + 1
 }

 let s = dic.sorted
 {
     $0.1 > $1.1 || ($0.1 == $1.1 && $0.0 > $1.0)
 }

 if s.count == 1
 {
     score = 50000 + s.first!.0 * 5000
 }
 else if s.count == 2
 {
     if s.first!.1 == 3
     {
         score = 10000 + s.first!.0 * 1000
     }
     else
     {
         score = 2000 + s.first!.0 * 500 + s.last!.0 * 500
     }
 }
 else
 {
     if s.first!.1 == 2
     {
         score = 1000 + s.first!.0 * 100
     }
     else
     {
         score = s.first!.0 * 100
     }
 }

 Ans = Ans < score ? score : Ans
 }

 print(Ans)
 */

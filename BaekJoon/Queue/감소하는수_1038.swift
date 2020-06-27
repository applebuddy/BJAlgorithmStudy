//
//  감소하는수_1038.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/08.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 감소하는수 1038

// MARK: CursorQueue swift 문제풀이

/*
 let N = Int(readLine()!)!
 var cnt = 1
 var Q = [Int](1...9)
 var cur = 0

 func check() -> Int {
 if N == 0 { return 0 }
 while cur < Q.count {
   let now = Q[cur]
   let last = now % 10
   cur += 1
   if N == cnt { return now }
   if now == 9876543210 { return -1 }

   for idx in 0..<last {
     let next = now * 10 + idx
     Q.append(next)
   }

   cnt += 1
 }
 return -1
 }

 print(check())
 */

// MARK: ArrayQueue swift 문제풀이

/*
 import Foundation

 let K = Int(readLine()!)!
 var cnt = 10

 if K <= 10 { print(K); exit(0) }

 var Q = [Int]()
 for i in 1...9 { Q.append(i) }

 while !Q.isEmpty {
 let nowNum = Q.first!
 let target = nowNum % 10
 Q.removeFirst()

 for i in 0..<target {
     let nextNum = nowNum * 10 + i
     cnt += 1
     if nextNum == 9876543210 && cnt < K+1 { print(-1); exit(0) }
     if cnt == K+1 { print(nextNum); exit(0) }
     Q.append(nextNum)
 }
 }
 */

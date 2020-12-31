//
//  회전하는큐_1021.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/02.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 회전하는큐 1021

// MARK: - 단순 배열활용 문제풀이

/*
 import Foundation

 let arr = readLine()!.split(separator: " ").map { Int($0)! }
 let N = arr[0], M = arr[1]
 var Q = Array<Int>(0..<N)

 let arr2 = readLine()!.split(separator: " ").map { Int($0)! }
 var Ans = 0

 for i in arr2.indices {
 let key = arr2[i]-1

 var idx = 0
 for i in Q.indices {
     if key == Q[i] { idx = i; break }
 }
 let lIdx = idx, rIdx = Q.count - idx
 if lIdx < rIdx {
     Ans += lIdx
     Q.append(contentsOf: Q[0..<lIdx])
     Q.removeSubrange(0..<lIdx)
     Q.removeFirst()
 } else {
     Ans += rIdx
     Q.insert(contentsOf: Q[Q.count-rIdx+1..<Q.count], at: 0)
     Q.removeSubrange(Q.count-rIdx+1..<Q.count)
     Q.removeLast()
 }
 }

 print(Ans)
 */

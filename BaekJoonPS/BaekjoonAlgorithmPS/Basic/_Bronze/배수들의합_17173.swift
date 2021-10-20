//
//  배수들의합_17173.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/09.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 배수들의합_17173

// MARK: swift 문제풀이

/*
 import Foundation

 let arr = readLine()!.split(separator: " ").map { Int($0)! }
 let N = arr[0]
 let arr2 = readLine()!.split(separator: " ").map { Int($0)! }
 var C = [Int](repeating: 0, count: 2001)
 var Ans = 0

 for i in arr2.indices {
 var num = arr2[i]
 while num <= N {
     if C[num] == 0 { C[num] = 1; Ans += num }
     num += arr2[i]
 }
 }

 print(Ans)
 */

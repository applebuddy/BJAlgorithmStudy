//
//  신용카드판별_14726.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/07.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 신용카드판별 14726

// MARK: swift 문제풀이

/*
 import Foundation

 let T = Int(readLine()!)!
 for _ in 0..<T {
 var N = Int(readLine()!)!
 var flag = false
 var sum = 0
 while N > 0 {
     if !flag {
         sum += N % 10
     } else {
         var mulVal = (N % 10) * 2
         var tempSum = 0
         while mulVal > 0 {
             tempSum += mulVal % 10
             mulVal /= 10
         }
         sum += tempSum
     }
     flag = flag == false ? true : false
     N /= 10
 }

 print(sum % 10 == 0 ? "T" : "F")
 }
 */

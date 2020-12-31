//
//  AC_5430.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/26.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: TLE 답안

/*
 import Foundation

 let N = Int(readLine()!)!

 for _ in 0..<N {
 let fuc = Array(readLine()!)
 let _ = readLine()
 var arr2 = Array(readLine()!)
 arr2.removeLast()
 arr2.removeFirst()
 var nArr = arr2.split(separator: ",")

 var flag = true
 var isReversed = false
 for i in fuc.indices {
     if nArr.isEmpty { flag = false; break }
     if fuc[i] == "D" {
         if isReversed {
             nArr.removeLast()
         } else {
             nArr.removeFirst()
         }
     } else {
         isReversed = !isReversed
     }
 }

 if !flag { print("error") }
 else {
     var str = "["
     if isReversed {
         var idx = nArr.count - 1
         while idx >= 0 {
             str += "\(Int(String(nArr[idx]))!)"
             if idx != 0 { str += "," }
             idx -= 1
         }
     } else {
         for i in nArr.indices {
             str += "\(Int(String(nArr[i]))!)"
             if i != nArr.count-1 { str += "," }
         }
     }
     str += "]"
     print(str)
 }
 }
 */

//
//  회사에있는사람_7785.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/07.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 회사에있는사람 7785

// MARK: - 문제풀이

/*
 // 복습 문제풀이
 let T = Int(readLine()!)!
 var dic = [String: Bool]()
 for _ in 0..<T {
 let arr = readLine()!.split(separator: " ").map { String($0) }
 dic[arr[0]] = arr[1] == "enter" ? true : nil
 }

 dic.map { $0.0 }.sorted(by: >).forEach { print($0) }
 */

/*
 import Foundation

 let N = Int(readLine()!)!
 var ST = Set<String>()
 for _ in 0..<N {
 let arr = readLine()!.split(separator: " ").map { String($0) }
 if arr[1] == "enter" {
     ST.insert(arr[0])
 } else {
     ST.remove(arr[0])
 }
 }

 let Ans = ST.sorted(by: >)
 for i in Ans.indices {
 print(Ans[i])
 }
 */

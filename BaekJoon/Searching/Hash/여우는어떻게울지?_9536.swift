//
//  여우는어떻게울지?_9536.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/12.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 여우는 어떻게 울지? 9536

// MARK: Hash 활용 문제풀이

/*
 import Foundation

 let T = Int(readLine()!)!

 for _ in 0..<T {
 let arr = readLine()!.split(separator: " ").map { String($0) }
 var dic = [String: Int]()
 while true
 {
     let talk = readLine()!
     if talk == "what does the fox say?" { break }
     let arr2 = talk.split(separator: " ").map { String($0) }
     dic[arr2.last!] = (dic[arr2.last!] ?? 0) + 1
 }

 for i in arr.indices
 {
     if dic[arr[i]] == nil
     {
         print(arr[i], terminator: " ")
     }
 }
 print()
 }
 */

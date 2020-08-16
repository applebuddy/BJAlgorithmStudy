//
//  거꾸로구구단_13410.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/02.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 거꾸로 구구단 13410

// MARK: swift 문제풀이

/*
 import Foundation

 let arr = readLine()!.split(separator: " ").map { Int($0)! }
 let N = arr[0], K = arr[1]
 var Ans = 0

 for i in 1...K {
 var num = N * i
 var reverse = ""
 while num > 0 {
     reverse = "\(reverse)\(num%10)"
     num /= 10
 }
 let rev = Int(reverse)!
 Ans = Ans < rev ? rev : Ans
 }

 print(Ans)
 */

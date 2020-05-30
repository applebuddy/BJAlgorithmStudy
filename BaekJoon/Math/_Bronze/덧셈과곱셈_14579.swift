//
//  덧셈과곱셈_14579.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/10.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 덧셈과 곱셈 14579

// MARK: swift 문제풀이

/*
 let arr = readLine()!.split(separator: " ").map { Int($0)! }
 let A = arr[0], B = arr[1]
 var Ans = [Int](1...A).reduce(0, +)
 var mul = Ans
 for i in A+1...B {
 mul += i
 Ans *= (mul)
 Ans %= 14579
 }

 print(Ans)
 */

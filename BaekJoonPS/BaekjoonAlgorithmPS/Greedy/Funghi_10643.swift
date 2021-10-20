//
//  Funghi_10643.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/04.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - Funghi_10643
// MARK: swift 문제풀이

/*
import Foundation

var sum = 0
var Ans = sum
var pizza = [Int]()
for i in 0..<8 {
    let N = Int(readLine()!)!
    pizza.append(N)
    if i < 4 { sum += N }
}

var left = 0, right = 4
for _ in 0..<8 {
    sum -= pizza[left]
    sum += pizza[right]
    Ans = Ans < sum ? sum : Ans
    left += 1
    right += 1
    if left >= 8 { left = 0 }
    if right >= 8 { right = 0 }
}

print(Ans)
*/

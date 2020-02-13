//
//  16진수_1550.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/13.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 16진수 1550
// MARK: 문제풀이
/*
import Foundation

let arr = Array(readLine()!)
var dic: [Character:Double] = ["0":0, "1":1, "2":2, "3":3, "4":4, "5":5, "6":6, "7":7, "8":8, "9":9, "A":10, "B":11, "C":12, "D":13, "E":14, "F":15]

var Ans: Double = 0, len: Int = arr.count - 1
for i in arr.indices {
    Ans += dic[arr[i]]! * pow(16, Double(len - i))
}

print(Int(Ans))
*/

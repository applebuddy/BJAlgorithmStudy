//
//  STROJOPIS_10551.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/04.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - STROJOPIS 10551
// MARK: swift 문제풀이

/*
import Foundation

let key = [
            "1":0, "Q":0, "A":0, "Z":0,
            "2":1, "W":1, "S":1, "X":1,
            "3":2, "E":2, "D":2, "C":2,
            "4":3, "R":3, "F":3, "V":3,
            "5":3, "T":3, "G":3, "B":3,
            "6":4, "Y":4, "H":4, "N":4,
            "7":4, "U":4, "J":4, "M":4,
            "8":5, "I":5, "K":5, ",":5,
            "9":6, "O":6, "L":6, ".":6,
            "0":7, "P":7, "=":7, "'":7,
            "-":7, "[":7, ";":7, "/":7,
            "]":7
            ]
            
let arr = Array(readLine()!).map { String($0) }
var Ans = [Int](repeating: 0, count: 8)
for i in arr.indices {
    Ans[key[arr[i]]!] += 1
}

print(Ans.map { String($0) }.joined(separator: "\n"))
*/

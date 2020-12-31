//
//  암호_1718.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/15.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 암호 1718
// MARK: String 문제풀이
/*
import Foundation

let str = Array(readLine()!)
let key = Array(readLine()!)
let kLen = key.count

var keyVal = [Int](repeating: 0, count: kLen)
var Ans = [Character](repeating: " ", count: str.count)
for i in key.indices {
    keyVal[i] = Int(key[i].unicodeScalars.first!.value)
}

for i in str.indices {
    if str[i] == " " { Ans[i] = " "; continue }
    let s = Int(str[i].unicodeScalars.first!.value)
    var now = s-keyVal[i%kLen]
    now += now <= 0 ? 25 : -1
    now += 97
    Ans[i] = Character(Unicode.Scalar(now)!)
}

print(Ans.map { String($0) }.joined())
*/

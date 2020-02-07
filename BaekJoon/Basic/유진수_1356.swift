//
//  유진수_1356.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/07.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 유진수 1356

// MARK: - 문제풀이
/*
import Foundation

let N = Array(readLine()!).map { Int(String($0))! }
var Ans = false
for i in 1 ..< N.count {
    var left = 1, right = 1
    for j in 0 ..< i {
        left *= N[j]
    }

    for j in i ... N.count - 1 {
        right *= N[j]
    }

    if left == right {
        Ans = true
        break
    }
}

print(Ans ? "YES" : "NO")
*/

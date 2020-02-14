//
//  Fraud-Busters_9584.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/14.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - fraud-Busters 9584
// MARK: String 문제풀이
/*
import Foundation

let origin = Array(readLine()!).map { String($0) }
let T = Int(readLine()!)!
var Ans = [String]()

for _ in 0..<T {
    let comp = Array(readLine()!).map { String($0) }
    var flag = true
    for i in origin.indices {
        if origin[i] == "*" { continue }
        if origin[i] != comp[i] { flag = false; break }
    }
    if flag { Ans.append(comp.joined()) }
}

print(Ans.count)
Ans.forEach { print($0) }
*/

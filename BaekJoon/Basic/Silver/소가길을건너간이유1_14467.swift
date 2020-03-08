//
//  소가길을건너간이유1_14467.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/09.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 소가 길을 건너간 이유 14467
// MARK: swift 문제풀이

/*
import Foundation

let T = Int(readLine()!)!
var cow = [Int](repeating: -1, count: 101)
var diff = 0

for _ in 0..<T {
    let arr = readLine()!.split(separator: " ").map { Int($0)! }
    let cNum = arr[0], pos = arr[1]
    if cow[cNum] == -1 { cow[cNum] = pos }
    else if cow[cNum] != pos {
        cow[cNum] = pos
        diff += 1
    }
}

print(diff)
*/

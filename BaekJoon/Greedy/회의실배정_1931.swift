//
//  회의실배정_1931.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/01.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 회의실배정 1931
// MARK: swift 문제풀이

/*
import Foundation

let N = Int(readLine()!)!
var meet = [[Int]](repeating: [Int](), count: N)

for i in 0..<N {
    meet[i] = readLine()!.split(separator: " ").map { Int($0)! }
}

meet.sort { $0[1] < $1[1] || ($0[1] == $1[1] && $0[0] < $1[1]) }

var target = 0, Ans = 0
for i in meet.indices {
    if target <= meet[i][0] {
        Ans += 1
        target = meet[i][1]
    }
}

print(Ans)
*/

//
//  수복원하기_2312.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/02.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 수 복원하기 2312
// MARK: Math swift 문제풀이

/*
import Foundation

let T = Int(readLine()!)!

let MAX = 100000
var Prime = [Int](repeating: 1, count: MAX+1)
var P = [Int]()

var i = 2, j = i+i
while i*i <= MAX {
    if Prime[i] == 1 {
        j = i+i
        while j <= MAX {
            Prime[j] = 0
            j += i
        }
    }
    i += 1
}

for i in 2...MAX {
    if Prime[i] == 1 { P.append(i) }
}

for _ in 0..<T {
    var N = Int(readLine()!)!
    var idx = 0
    while N > 1 {
        var cnt = 0
        while N % P[idx] == 0 {
            cnt += 1
            N /= P[idx]
        }
        if cnt > 0 { print("\(P[idx]) \(cnt)") }
        idx += 1
    }
}
*/

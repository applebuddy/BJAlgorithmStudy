//
//  팰린드롬만들기_1213.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/02.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 팰린드롬 만들기 1212

// MARK: string swift 문제풀이2 (좀 더 간결한 버전)

/*
import Foundation

let S = Array(readLine()!).sorted()
let len = S.count
var dic = [Character:Int]()

for i in S.indices {
    dic[S[i]] = (dic[S[i]] ?? 0) + 1
}

var idx = 0
var L = ""
var R = ""
var center = ""
while idx < len {
    var cnt = dic[S[idx]]!
    let next = idx + cnt
    if cnt % 2 == 0 {
            L = "\(L)\([String](repeating: "\(S[idx])", count: cnt/2).joined())"
            R = "\([String](repeating: "\(S[idx])", count: cnt/2).joined())\(R)"
    } else {
        cnt -= 1
        if center != "" { print("I'm Sorry Hansoo"); exit(0) }
        else {
            center = "\(S[idx])"
            L = "\(L)\([String](repeating: "\(S[idx])", count: cnt/2).joined())"
            R = "\([String](repeating: "\(S[idx])", count: cnt/2).joined())\(R)"
        }
    }
    idx = next
}

print("\(L)\(center)\(R)")
*/

// MARK: string swift 문제풀이

/*
import Foundation

let S = Array(readLine()!).sorted()
var dic = [Character:Int]()

for i in S.indices {
    dic[S[i]] = (dic[S[i]] ?? 0) + 1
}

var idx = 0
var L = ""
var R = ""
var center = ""
while idx < S.count {
    var cnt = dic[S[idx]]!
    let next = idx + cnt
    if cnt % 2 == 0 {
        for _ in 0..<cnt/2 {
            L = "\(L)\(S[idx])"
            R = "\(S[idx])\(R)"
        }
    } else {
        cnt -= 1
        if center != "" { print("I'm Sorry Hansoo"); exit(0) }
        else {
            center = "\(S[idx])"
            for _ in 0..<cnt/2 {
                L = "\(L)\(S[idx])"
                R = "\(S[idx])\(R)"
            }
        }
    }
    idx = next
}

print("\(L)\(center)\(R)")
*/

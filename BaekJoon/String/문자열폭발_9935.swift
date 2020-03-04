//
//  문자열폭발_9935.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/04.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 문자열폭발 9935
// MARK: stack C++ 문제풀이

/*
import Foundation

let S = Array(readLine()!)
let key = Array(readLine()!)
let sLen = S.count
let kLen = key.count
var now = [Character]()
for i in S.indices {
    now.append(S[i])
    let nLen = now.count
    if nLen >= kLen {
        var idx = 0
        var flag = true
        for i in nLen-kLen..<nLen {
            if now[i] != key[idx] {
                flag = false
                break
            }
            idx += 1
        }
        
        if flag {
            for _ in 0..<kLen { now.removeLast() }
        }
    }
}

if now.isEmpty { print("FRULA") }
else { print(now.map { String($0) }.joined()) }
*/

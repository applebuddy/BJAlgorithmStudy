//
//  비밀편지_2596.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/24.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 비밀편지 2596
// MARK: Hash 문제풀이
/*
import Foundation

var dic = ["000000":"A", "001111":"B", "010011":"C", "011100":"D", "100110":"E", "101001":"F", "110101":"G", "111010":"H"]
var arr = ["000000", "001111", "010011", "011100", "100110", "101001", "110101", "111010"]
let N = Int(readLine()!)!
let G = Array(readLine()!).map { String($0) }
var Ans = ""

func checkDiff(_ s: inout String, _ comp: inout String) -> Bool {
    let sArr = Array(s)
    let compArr = Array(comp)
    var diff = 0
    for i in sArr.indices {
        if sArr[i] != compArr[i] { diff += 1 }
        if diff > 1 { return false }
    }
    return true
}

for i in 0..<N {
    var comp = Array(G[i*6..<i*6+6]).joined()
    if dic[comp] == nil {
        var flag = false
        for j in arr.indices {
            if checkDiff(&comp, &arr[j]) {
                Ans += dic[arr[j]]!
                flag = true
                break
            }
        }
        if !flag { print(i+1); exit(0) }
        
    }
    else { Ans += dic[comp]! }
}

print(Ans)
*/

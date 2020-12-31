//
//  IOIOI_5525.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/28.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - IOIOI 5525
// MARK: string swift 문제풀이

/*
import Foundation

let N = Int(readLine()!)!
let len = Int(readLine()!)!
let arr = Array(readLine()!)
var Ans = 0
var i = 0
while i < len {
    if i < len-2 && arr[i+1] == "O" && arr[i+2] == "I" {
        var oCnt = 0
        while i < len-2 && arr[i] == "I" && arr[i+1] == "O" && arr[i+2] == "I" {
            oCnt += 1
            i += 2
            if oCnt == N {
                oCnt -= 1
                Ans += 1
            }
        }
    }
    i += 1
}

print(Ans)
*/

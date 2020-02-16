//
//  문자열분석_10820.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/16.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 문자열분석 10820
// MARK: String 문제풀이

/*
import Foundation

while let IP = readLine() {
    let arr = Array(IP)
    var Ans = [0,0,0,0]
    for i in arr.indices {
        if arr[i] == " " { Ans[3] += 1 }
        let val = arr[i].unicodeScalars.first!.value
        if val >= 48 && val <= 57 { Ans[2] += 1 }
        else if val >= 65 && val <= 90 { Ans[1] += 1 }
        else if val >= 97 && val <= 122 { Ans[0] += 1 }
    }
    Ans.forEach { print($0, terminator: " ") }
    print()
}
*/

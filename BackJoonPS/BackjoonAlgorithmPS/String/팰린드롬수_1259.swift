//
//  팰린드롬수_1259.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/17.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 팰린드롬수 1259
// MARK: 문제풀이

/*
 
import Foundation

// 복습 풀이
while let S = readLine(), S != "0" {
    let G = Array(S)
    var l = 0, r = G.count-1
    var Ans = "yes"
    while l < r {
        if G[l] != G[r] { Ans = "no"; break }
        l += 1
        r -= 1
    }
    print(Ans)
}

while true {
    let str = readLine()!
    if str == "0" { break }
    let arr = Array(str)
    
    let isP = arr == arr.reversed() ? true : false
    print(isP ? "yes" : "no")
}
 
*/

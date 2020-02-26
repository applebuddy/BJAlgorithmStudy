//
//  괄호_9012.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/27.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 괄호 9012
// MARK: Stack C++ 문제풀이

/*
import Foundation

let T = Int(readLine()!)!
for _ in 0..<T {
    let S = Array(readLine()!)
    var STK = 0
    var flag = true
    for i in S.indices {
        if S[i] == "(" { STK += 1 }
        else {
            if STK > 0 {
                STK -= 1
            } else {
                flag = false
                break
            }
        }
    }
    
    if !flag || STK>0 { print("NO") }
    else { print("YES") }
}
*/

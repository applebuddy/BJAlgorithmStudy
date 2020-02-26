//
//  다음소수_4134.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/27.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 다음소수 4134
// MARK: Math C++ 문제풀이

/*
import Foundation

let T = Int(readLine()!)!
for _ in 0..<T {
    var N = Int(readLine()!)!
    if N <= 2 { print(2); continue }
    else if N == 3 { print(3); continue }
    var flag = false
    while true {
        if N % 2 == 1 {
            flag = true
            for i in 2...Int(sqrt(Double(N))) {
                if N % i == 0 {
                    flag = false
                    break
                }
            }
            if flag { break }
        }
        N += 1
    }
    print(N)
}
*/

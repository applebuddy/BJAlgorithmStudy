//
//  분산처리_1009.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/17.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 분산처리 1009
// MARK: 문제풀이
/*
import Foundation

let T = Int(readLine()!)!

func nPow(_ N: Int, _ R: Int) -> Int {
    var num = N
    var r = R
    var result = 1
    while r > 0 {
        if r % 2 == 0 {
            num *= num
            num %= 10
            r /= 2
        } else {
            result *= num
            result %= 10
            r -= 1
        }
    }
    return result % 10 == 0 ? 10 : result % 10
}

for _ in 0..<T {
    let arr = readLine()!.split(separator: " ").map { Int($0)! }
    let A = arr[0], B = arr[1]
    print(nPow(A,B))
}
*/

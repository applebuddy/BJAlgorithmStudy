//
//  기타줄_1049.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/05.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 기타줄_1049

// MARK: - 문제풀이
/*
import Foundation

let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], B = arr[1]
var P: (Int, Int) = (1234, 1234)
for _ in 0..<B {
    let arr2 = readLine()!.split(separator: " ").map { Int($0)! }
    let a = arr2[0], b = arr2[1]
    P.0 = min(P.0, a)
    P.1 = min(P.1, b)
}

print(min(P.0 * (N/6) + P.1 * (N%6), min(P.0 * ((N-1)/6+1), P.1 * N)))
*/




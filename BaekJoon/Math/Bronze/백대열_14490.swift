//
//  백대열_14490.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/10.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 백대열 14490
// MARK: swift 문제풀이

/*
let arr = readLine()!.split(separator: ":").map { Int($0)! }

var A = arr[0], B = arr[1]

func getGCD(_ A: Int, _ B: Int) -> Int {
    if B == 0 { return A }
    return getGCD(B, A%B)
}

while true {
    let nowGCD = getGCD(A,B)
    if nowGCD == 1 { break }
    A /= nowGCD
    B /= nowGCD
}

print("\(A):\(B)")
*/

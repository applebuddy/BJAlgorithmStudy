//
//  GCD합_9613.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/02.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - GCD 합 9613
// MARK: GCD swift 문제풀이

/*
import Foundation

let T = Int(readLine()!)!

func getGCD(_ A: Int, _ B: Int) -> Int {
    if B == 0 { return A }
    return getGCD(B, A%B)
}

for _ in 0..<T {
    let arr = readLine()!.split(separator: " ").map { Int($0)! }
    var Ans = 0
    for i in 1..<arr.count-1 {
        for j in i+1..<arr.count {
            let gcd = getGCD(arr[i],arr[j])
            Ans += gcd
        }
    }
    print(Ans)
}
*/

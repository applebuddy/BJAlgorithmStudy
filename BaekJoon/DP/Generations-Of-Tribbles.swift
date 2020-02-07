//
//  Generations-Of-Tribbles.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/07.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: Generations of Tribbles
// MARK: - DP 문제풀이

/*
import Foundation

let T = Int(readLine()!)!
var Fib = [Int](repeating: 0, count: 70)
Fib[0] = 1; Fib[1] = 1; Fib[2] = 2; Fib[3] = 4

func getFib(_ N: Int) -> Int {
    if Fib[N]>0 { return Fib[N] }
    Fib[N] = getFib(N-1) + getFib(N-2) + getFib(N-3) + getFib(N-4)
    return Fib[N]
}

for _ in 0..<T {
    let num = Int(readLine()!)!
    print(getFib(num))
}
*/

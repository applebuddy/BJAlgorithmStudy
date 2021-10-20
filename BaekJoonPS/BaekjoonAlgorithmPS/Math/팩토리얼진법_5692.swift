//
//  팩토리얼진법_5692.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/18.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 팩토리얼진법 5692
// MARK: 문제풀이
/*
import Foundation

while true {
    var N = Int(readLine()!)!
    if N == 0 { break }
    var flag = 1, fac = 1, Ans = 0
    while N > 0 {
        fac *= flag
        Ans += fac * (N % 10)
        flag += 1
        N /= 10
    }
    print(Ans)
}
*/

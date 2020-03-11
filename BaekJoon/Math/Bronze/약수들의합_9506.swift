//
//  약수들의합_9506.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/12.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 약수들의합 9506
// MARK: swift 문제풀이
/*
while true {
    let N = Int(readLine()!)!
    if N == -1 { break }
    var sum = 0
    var S = ""
    for i in 1...N/2 {
        if N % i == 0 {
            if S != "" { S += " + " }
            S += "\(i)"; sum += i
        }
    }
    
    if sum == N { print("\(N) = \(S)") }
    else { print("\(N) is NOT perfect.") }
}
*/

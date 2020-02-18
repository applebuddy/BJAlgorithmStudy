//
//  소수사이수열_3896.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/18.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 소수사이수열 3896
// MARK: 에라토스테네스체 문제풀이
/*
 
import Foundation

let T = Int(readLine()!)!

let MAX = 1299709

var Prime = [Int](repeating: 1, count: MAX+1)

var i = 2, j = 0
while i * i <= MAX {
    if Prime[i] == 0 { i += 1; continue }
    j = i + i
    while j <= MAX {
        Prime[j] = 0
        j += i
    }
    i += 1
}
    
for _ in 0..<T {
    let N = Int(readLine()!)!
    
    Prime[0] = 0
    Prime[1] = 0
    
    if Prime[N]==1 { print(0); continue }
    var left = N-1
    var right = N, Ans = 1
    while Prime[left] == 0 {
        Ans += 1
        left -= 1
    }
    
    while Prime[right] == 0 {
        Ans += 1
        right += 1
    }
    
    print(Ans)
}
*/

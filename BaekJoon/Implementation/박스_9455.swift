//
//  박스_9455.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/14.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 구현 문제풀이
/*
import Foundation

let T = Int(readLine()!)!

for _ in 0..<T {
    let arr = readLine()!.split(separator: " ").map { Int($0)! }
    let m = arr[0], n = arr[1]
    var G = [[Int]](repeating: [Int](), count: m)
    for i in 0..<m {
        G[i] = readLine()!.split(separator: " ").map { Int($0)! }
    }
    
    var score = [Int](repeating: 0, count: n)
    var Ans = 0
    for i in stride(from: G.count-1, through: 0, by: -1) {
        for j in G[i].indices {
            if G[i][j]==0 { score[j] += 1 }
            else { Ans += score[j] }
        }
    }
    
    print(Ans)
}
*/

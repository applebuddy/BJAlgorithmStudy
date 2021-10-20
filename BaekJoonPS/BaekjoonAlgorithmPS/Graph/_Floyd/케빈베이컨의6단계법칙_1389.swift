//
//  케빈베이컨의6단계법칙_1389.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/27.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 케빈 베이컨의 6단계 법칙 1389
// MARK: 문제풀이

/*
import Foundation

let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], M = arr[1]
let MAX = 123456789
var G = [[Int]](repeating: [Int](repeating: MAX, count: N + 1), count: N + 1)

for _ in 0..<M {
    let arr2 = readLine()!.split(separator: " ").map { Int($0)! }
    G[arr2[0]][arr2[1]] = 1
    G[arr2[1]][arr2[0]] = 1
}

for i in 1...N { G[i][i] = MAX }

for k in 1...N {
    for i in 1...N {
        for j in 1...N {
            if G[i][j] > G[i][k] + G[k][j] {
                G[i][j] = G[i][k] + G[k][j]
            }
        }
    }
}

var Ans: (Int,Int) = (1,MAX)
for i in 1...N {
    var comp = 0
    for j in G[i].indices {
        if i != j && G[i][j] != MAX { comp += G[i][j] }
    }
    
    if Ans.1 > comp {
        Ans.1 = comp
        Ans.0 = i
    }
}

print(Ans.0)
*/

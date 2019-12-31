//
//  토마토_7576.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/01/01.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// 미통과 답안

/*
import Foundation
 
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let tx = [0,0,-1,1]
let ty = [1,-1,0,0]

let col = arr[0], row = arr[1]
var remain = 0, Ans = 0
var G = [[Int]]()
var Q = [(Int,Int)]()

for _ in 0..<row {
    let row = readLine()!.split(separator: " ").map { Int($0)! }
    G.append(row)
}

for i in G.indices {
    for j in G[i].indices {
        if G[i][j] == 0 { remain += 1 }
        if G[i][j] == 1 {
            Q.append((i,j))
        }
    }
}

if remain == 0 { print(0); exit(0) }

while(!Q.isEmpty) {
    let nowN = Q.first!
    Q.removeFirst()
    if remain <= 0 { break }
    for i in 0..<4 {
        let nextN = (nowN.0 + ty[i], nowN.1 + tx[i])
        if nextN.0 >= row || nextN.0 < 0 || nextN.1 >= col || nextN.1 < 0 { continue }
        if G[nextN.0][nextN.1] != 0 { continue }
        G[nextN.0][nextN.1] = G[nowN.0][nowN.1] + 1
        Ans = Ans < G[nextN.0][nextN.1] ? G[nextN.0][nextN.1] : Ans
        Q.append((nextN.0, nextN.1))
        remain -= 1
    }
}

print(remain == 0 ? max(0,Ans-1) : -1)
*/

//
//  이동하기_11048.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/07.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 이동하기 11048

// MARK: - DP 문제풀이
/*
import Foundation

let chkX = [-1, 0, -1]
let chkY = [0, -1, -1]
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], M = arr[1]
var Ans = 0
var G = [[Int]](repeating: [Int](), count: N)
for i in 0 ..< N {
    let arr2 = readLine()!.split(separator: " ").map { Int($0)! }
    G[i] = arr2
}

for i in G.indices {
    for j in G[i].indices {
        var maxV = G[i][j]
        for t in chkX.indices {
            let ni = i + chkX[t], nj = j + chkY[t]
            if ni < 0 || nj < 0 || ni >= N || nj >= M { continue }
            maxV = max(maxV, G[i][j] + G[ni][nj])
        }
        G[i][j] = maxV
        Ans = Ans < G[i][j] ? G[i][j] : Ans
    }
}

print(Ans)
*/

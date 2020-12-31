//
//  경로찾기_11403.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/27.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 경로찾기 11403
// MARK: swift 문제풀이

/*
import Foundation

let N = Int(readLine()!)!
var G = [[Int]](repeating: [Int](repeating: 0, count: N), count: N)
let MAX = 123456789

for i in 0..<N {
    G[i] = readLine()!.split(separator: " ").map { Int($0)! }
    for j in G[i].indices {
        G[i][j] = G[i][j] == 0 ? MAX : G[i][j]
    }
}

for k in 0..<N {
    for i in 0..<N {
        for j in 0..<N {
            if G[i][j] > G[i][k] + G[k][j] {
                G[i][j] = G[i][k] + G[k][j]
            }
        }
    }
}

for i in G.indices {
    var S = ""
    for j in G[i].indices {
        G[i][j] = G[i][j]==MAX ? 0 : 1
        S += "\(G[i][j]) "
    }
    print(S)
}
*/

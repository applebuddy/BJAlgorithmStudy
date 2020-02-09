//
//  적록색약_10026.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/09.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 적록색약 10026
// MARK: - DFS 문제풀이
/*
import Foundation

let N = Int(readLine()!)!
var G = [[String]](repeating: [String](), count: N)
var rG = [[String]]()
let tx = [0,0,-1,1]
let ty = [1,-1,0,0]

for i in 0..<N {
    G[i] = Array(readLine()!).map { String($0) }
}

rG = G

for i in rG.indices {
    for j in rG[i].indices {
        rG[i][j] = rG[i][j]=="R" ? "G" : rG[i][j]
    }
}

func DFS(_ X: Int, _ Y: Int, _ G: inout [[String]], _ C: inout [[Int]]) {
    let x = X, y = Y
    for i in 0..<4 {
        let nx = x+tx[i]
        let ny = y+ty[i]
        if nx<0 || ny<0 || nx>=N || ny>=N { continue }
        if C[nx][ny]==1 || G[x][y] != G[nx][ny] { continue }
        C[nx][ny]=1
        DFS(nx,ny,&G,&C)
    }
}

func checkDiv(_ G: inout [[String]]) -> Int {
    var C = [[Int]](repeating: [Int](repeating: 0, count: N), count: N)
    var Cnt = 0
    for i in G.indices {
        for j in G[i].indices {
            if C[i][j]==1 { continue }
            C[i][j]=1
            Cnt += 1
            DFS(i,j,&G,&C)
        }
    }
    return Cnt
}

print("\(checkDiv(&G)) \(checkDiv(&rG))")
*/

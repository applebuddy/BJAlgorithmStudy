//
//  벽부수고이동하기_2206.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/01.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: TLE 답안

/*
import Foundation

let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], M = arr[1]
let tx = [0,0,-1,1]
let ty = [1,-1,0,0]

var G = [[Character]](repeating: [Character](), count: N)
var C = [[[Int]]](repeating: [[Int]](repeating: [Int](repeating: 0, count: 2), count: 1001), count: 1001)

for i in 0..<N {
    G[i] = Array(readLine()!)
}

if N == 1 && M == 1 { print(1); exit(0) }

func BFS() -> Int {
    var Q = [((Int,Int), Int)]()
    Q.append(((0,0),0))
    C[0][0][0] = 1
    
    while !Q.isEmpty {
        let node = Q.first!
        Q.removeFirst()
        let nx = node.0.0
        let ny = node.0.1
        let broken = node.1
        for i in 0..<4 {
            let mx = nx + tx[i]
            let my = ny + ty[i]
            if mx < 0 || my < 0 || mx >= N || my >= M { continue }
            if C[mx][my][broken] > 0 { continue }
            
            if G[mx][my] == "0" {
                C[mx][my][broken] = C[nx][ny][broken] + 1
                Q.append(((mx,my),broken))
            } else if broken == 0 {
                C[mx][my][1] = C[nx][ny][broken] + 1
                Q.append(((mx,my),1))
            }
            
            if mx == N-1 && my == M-1 { return C[mx][my][broken] }
        }
    }
    return -1
}

print(BFS())
*/

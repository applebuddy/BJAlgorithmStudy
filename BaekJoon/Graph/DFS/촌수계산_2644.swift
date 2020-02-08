//
//  촌수계산_2644.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/09.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 촌수계산 2644
// MARK: - DFS 문제풀이

/*
import Foundation

let N = Int(readLine()!)!

let arr = readLine()!.split(separator: " ").map { Int($0)! }
let A = arr[0], B = arr[1]

let T = Int(readLine()!)!

var G = [[Int]](repeating: [Int](), count: 101)
var C = [Int](repeating: 0, count: 101)
var Ans = false

for _ in 0..<T {
    let arr2 = readLine()!.split(separator: " ").map { Int($0)! }
    let a = arr2[0], b = arr2[1]
    G[a].append(b)
    G[b].append(a)
}

func DFS(_ node: Int) {
    
    for i in G[node].indices {
        let nextNode = G[node][i]
        if C[nextNode]>0 { continue }
        C[nextNode] = C[node] + 1
        if nextNode == B { return }
        DFS(nextNode)
    }
}

C[A]=1
DFS(A)

print(C[B]-1)
*/

//
//  유기농배추_1012.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/01/03.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 유기농배추_1012 문제풀이

/*
 import Foundation

 let tx = [-1, 1, 0, 0]
 let ty = [0, 0, -1, 1]

 func BFS(_ x: Int, _ y: Int, _ G: inout [[Int]]) {
 var Q = [(x, y)]
 G[x][y] = 0
 while !Q.isEmpty {
     let node = Q.first!
     let nx = node.0, ny = node.1
     Q.removeFirst()
     for i in 0..<4 {
         let mx = nx + tx[i], my = ny + ty[i]
         if mx < 0 || my < 0 || mx >= G.count || my >= G[0].count { continue }
         if G[mx][my] == 0 { continue }
         G[mx][my] = 0
         Q.append((mx, my))
     }
 }
 }

 let T = Int(readLine()!)!
 for _ in 0..<T {

 let arr2 = readLine()!.split(separator: " ").map { Int($0)! }
 let col = arr2[0], row = arr2[1], N = arr2[2]
 var G = [[Int]](repeating: [Int](repeating: 0, count: col), count: row)
 var Ans = 0

 for _ in 0..<N {
     let arr3 = readLine()!.split(separator: " ").map { Int($0)! }
     let X = arr3[0], Y = arr3[1]
     G[Y][X] = 1
 }

 for i in G.indices {
     for j in G[i].indices {
         if G[i][j] == 0 { continue }
         Ans += 1
         BFS(i, j, &G)
     }
 }

 print(Ans)
 }
 */

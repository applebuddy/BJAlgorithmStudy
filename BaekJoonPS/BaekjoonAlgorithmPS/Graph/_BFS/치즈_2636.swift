//
//  치즈_2636.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/03.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 치즈 2636

// MARK: - BFS 문제풀이

/*
 import Foundation

 typealias Pair = (Int,Int)
 let arr = readLine()!.split(separator: " ").map { Int($0)! }
 let M = arr[0], N = arr[1]
 let tx = [-1,1,0,0]
 let ty = [0,0,-1,1]
 var G = [[Int]](repeating: [Int](), count: M)
 var tempG = [[Int]]()
 var C = [[Int]]()
 var Cnt = 0, Time = 1

 for i in G.indices {
 G[i] = readLine()!.split(separator: " ").map { Int($0)! }
 }

 for i in G.indices {
 for j in G[i].indices {
     if G[i][j]==1 { Cnt += 1 }
 }
 }

 tempG = G

 func BFS(_ X: Int, _ Y: Int) {
 var Q = [Pair]()
 Q.append((X,Y))
 while !Q.isEmpty {
     let node = Q.first!
     Q.removeFirst()
     let nx = node.0
     let ny = node.1
     for i in 0..<4 {
         let mx = nx + tx[i]
         let my = ny + ty[i]
         if mx<0 || my<0 || mx>=M || my>=N { continue }
         if C[mx][my]==1 { continue }
         C[mx][my]=1
         if G[mx][my]==1 {
             tempG[mx][my]=0
             Cnt -= 1
         }
         else {
             Q.append((mx,my))
         }
     }
 }
 }

 while Cnt > 0 {
 let nowCnt = Cnt
 C = [[Int]](repeating: [Int](repeating: 0, count: N), count: M)
 C[0][0]=1
 BFS(0,0)
 G = tempG
 if Cnt <= 0 {
     print(Time); print(nowCnt)
     break
 }
 Time += 1
 }
 */

//
//  숫자판점프_2210.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/01/30.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 숫자판점프_2210

// MARK: - DFS 문제풀이

/*
 import Foundation

 var G = [[String]](repeating: [String](), count: 5);
 var MP = [String:Int]()
 var tx = [0,0,-1,1]
 var ty = [-1,1,0,0]
 var Ans = 0, len = 5

 func DFS(_ cnt: Int, _ S: String, _ X: Int, _ Y: Int) {
 if cnt >= 6 { MP[S] = 1; return }
 for i in tx.indices {
     let nx = X + tx[i]
     let ny = Y + ty[i]
     if nx < 0 || ny < 0 || nx >= len || ny >= len { continue }
     DFS(cnt+1, S+G[nx][ny], nx, ny)
 }
 }

 for i in G.indices {
 let arr = readLine()!.split(separator: " ").map { String($0) }
 G[i] = arr;
 }

 for i in G.indices {
 for j in G[i].indices {
     DFS(1, G[i][j], i, j)
 }
 }

 print(MP.count)
 */

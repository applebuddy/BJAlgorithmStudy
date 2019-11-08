//
//  미로탐색_2178.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 16/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - 미로탐색

// MARK: - 배열큐 사용 미로탐색 구현 버전

/*
 let tx: [Int] = [0,0,1,-1]
 let ty: [Int] = [1,-1,0,0]

 var G = [[Int]]()
 var C = [[Int]](repeating: [Int](repeating: 0, count: 101), count: 101)

 func checkMiro(x: Int, y: Int) {
 var Q: [(x: Int, y: Int)] = [(0,0)]
 C[0][0]=1;

 while(!Q.isEmpty){
     let nx = Q.first!.x
     let ny = Q.first!.y
     Q.removeFirst()
     for i in 0..<4 {
         let rx = nx + tx[i]
         let ry = ny + ty[i]
         if rx<0 || rx>=x || ry<0 || ry>=y { continue }
         if C[rx][ry] != 0 || G[rx][ry] == 0 { continue }
         C[rx][ry]=C[nx][ny]+1;
         Q.append((rx,ry));
     }
 }
 }

 func searchingMiro() {
 let N=4, M=6
 G = [[1,0,1,1,1,1],[1,0,1,0,1,0],[1,0,1,0,1,1],[1,1,1,0,1,1]]
 checkMiro(x: N, y: M);
 print("\(C[N-1][M-1])")
 return
 }
 */

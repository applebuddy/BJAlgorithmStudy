//
//  숨바꼭질_1697.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/15.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 숨바꼭질 1697
// MARK: BFS 문제풀이
/*
import Foundation

let MAX = 100001
var C = [Int](repeating: 0, count: MAX)
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let X = arr[0], Y = arr[1]
var Ans = MAX

if X >= Y { print(X-Y); exit(0) }

func BFS(_ X: Int,_ Y: Int) {
    var Q = [(Int,Int)]()
    Q.append((X,0))
    
    while !Q.isEmpty
    {
        let node = Q.first!.0
        let cnt = Q.first!.1
        Q.removeFirst()
        if cnt >= Ans { continue }
        if node > Y { Ans = min(Ans, node - Y + cnt); continue }
        
        if node * 2 <= MAX && C[node * 2]==0 {
            if node * 2 == Y { Ans = min(Ans,cnt + 1); return }
            C[node * 2] = cnt + 1
            Q.append((node * 2, cnt + 1))
        }
        
        if C[node + 1]==0 {
            if node + 1 == Y { Ans = min(Ans,cnt + 1); return }
            C[node + 1] = cnt + 1
            Q.append((node + 1, cnt + 1))
        }
        
        if node-1 > 0 && C[node - 1]==0 {
            if node - 1 == Y { Ans = min(Ans,cnt + 1); return }
            C[node - 1] = cnt + 1
            Q.append((node - 1, cnt + 1))
        }
    }
}

BFS(X,Y)
print(Ans)
*/

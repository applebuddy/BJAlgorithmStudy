//
//  최종순위_3665.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/12.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 최종순위 3665
// MARK: 위상정렬 문제풀이
/*
import Foundation

let T = Int(readLine()!)!
for _ in 0..<T {
    let N = Int(readLine()!)!
    let arr = readLine()!.split(separator: " ").map { Int($0)! }
    var Matrix = [[Int]](repeating: [Int](repeating: 0, count: 501), count: 501)
    var Rank = [Int](repeating: 0, count: 501)
    let K = Int(readLine()!)!
    var kArr = [[Int]]()
    
    for _ in 0..<K
    {
        kArr.append(readLine()!.split(separator: " ").map { Int($0)! })
    }
    
    for i in 0..<N
    {
        for j in i+1..<N
        {
            Matrix[arr[i]][arr[j]] = 1
            Rank[arr[j]] += 1
        }
    }

    for i in 0..<K
    {
    
        let A = kArr[i][0], B = kArr[i][1]
        if Matrix[A][B] == 1
        {
            Matrix[B][A] = 1
            Matrix[A][B] = 0
            Rank[B] -= 1
            Rank[A] += 1
        }
        else
        {
            Matrix[A][B] = 1
            Matrix[B][A] = 0
            Rank[A] -= 1
            Rank[B] += 1
        }
    }
    
    var Q = [Int](), Ans = [Int]()
    
    for i in 1...N
    {
        if Rank[i] == 0
        {
            Q.append(i)
        }
    }
    
    var iDontKnow = true
    while !Q.isEmpty
    {
        if Q.count > 1 { iDontKnow = false; break }
        let node = Q.first!
        Q.removeFirst()
        
        Ans.append(node)
        for i in 1...N
        {
            if Matrix[node][i] == 1
            {
                Rank[i] -= 1
                if Rank[i] == 0 { Q.append(i) }
            }
        }
    }
    
    if !iDontKnow { print("?"); continue }
    else if Ans.count == N
    {
        Ans.forEach { print($0, terminator: " ") }
        print()
    }
    else
    {
        print("IMPOSSIBLE")
    }
}
*/

//
//  바닥장식_1388.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/17.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 바닥장식 1388
// MARK: 문제풀이
/*
 
import Foundation

let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], M = arr[1]
var G = [[Character]](repeating: [Character](), count: N)
for i in 0..<N {
    G[i] = Array(readLine()!)
}

var Ans = 0
for i in G.indices {
    for j in G[i].indices {
        if G[i][j] == "-" {
            if (j>0 && G[i][j-1] != G[i][j]) || j==0 { Ans += 1 }
        } else {
            if (i>0 && G[i-1][j] != G[i][j]) || i==0 { Ans += 1 }
        }
    }
}

print(Ans)
 
*/

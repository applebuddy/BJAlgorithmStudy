//
//  친구_1058.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/06.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 친구 1058
// MARK: Floyd swift 문제풀이

/*
import Foundation

let N = Int(readLine()!)!
let MAX = Int(2e9)
var G = [[Character]](repeating: [Character](), count: N)
for i in 0..<N {
    G[i] = Array(readLine()!)
}

var friends = [[Int]](repeating: [Int](repeating: MAX, count: N), count: N)
var C = [Int](repeating: 0, count: N)
var Ans = 0

for i in G.indices {
    for j in G[i].indices {
        if G[i][j] == "Y" {
            friends[i][j] = 1
            friends[j][i] = 1
        }
    }
}

for i in 0..<N { friends[i][i] = 0 }

for k in 0..<N {
    for i in 0..<N {
        for j in 0..<N {
            friends[i][j] = min(friends[i][j], friends[i][k]+friends[k][j])
        }
    }
}

for i in friends.indices {
    var cnt = 0
    for j in friends[i].indices {
        if friends[i][j] <= 2 && friends[i][j] != 0 { cnt += 1 }
    }
    Ans = Ans < cnt ? cnt : Ans
}

print(Ans)
*/

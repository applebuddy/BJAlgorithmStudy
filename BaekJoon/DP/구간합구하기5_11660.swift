//
//  구간합구하기5_11660.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/29.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 구간합구하기 5 11660
// MARK: swift 구간합 TLE 답안

/*
import Foundation

typealias Pair = (Int,Int)

let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], K = arr[1]
var G = [[Int]](repeating: [Int](), count: N+1)

G[0] = [Int](repeating: 0, count: N+1)
for i in 1...N {
    var arr2 = [0]
    let add = readLine()!.split(separator: " ").map { Int($0)! }
    arr2.append(contentsOf: add)
    G[i] = arr2
}

for i in 1...N {
    for j in 1...N {
        G[i][j] = G[i][j] + G[i-1][j] + G[i][j-1] - G[i-1][j-1]
    }
}

for _ in 0..<K {
    let arr3 = readLine()!.split(separator: " ").map { Int($0)! }
    let p: Pair = (arr3[0],arr3[1])
    let p2: Pair = (arr3[2],arr3[3])
    var Ans = G[p2.0][p2.1] - G[p2.0][p.1 - 1] - G[p.0 - 1][p2.1]
    Ans += G[p.0 - 1][p.1 - 1]
    print(Ans)
}
*/

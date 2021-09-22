//
//  RGB거리2_17404.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/09/23.
//  Copyright © 2021 MungGu. All rights reserved.
//

// MARK: - RGB거리 2 17404 DP 풀이

/*
let readInput: (() -> [Int]) = {
    var result: [Int] = []
    var temp = 0
    readLine()!.forEach { char in
        if char == " " {
            result.append(temp)
            temp = 0
            return
        }
        
        temp = temp * 10 + Int(char.asciiValue!) - 48
    }
    result.append(temp)
    return result
}

let N = readInput().first!
var G = [[Int]]()
var DP = [[Int]](repeating: [Int](repeating: 0, count: 3), count: N) // i번째 집에서 k color를 사용할때의 최솟값
(0..<N).forEach { _ in
    G.append(readInput())
}

let mxNum = 1000 * 1000 + 1
var Ans = mxNum

print((0..<3).reduce(into: mxNum) { (Ans, idx) in
    for kdx in (0..<3) {
        if idx == kdx {
            DP[0][idx] = G[0][idx]
        } else {
            DP[0][kdx] = mxNum
        }
    }
    
    for jdx in (1..<N) {
        DP[jdx][0] = min(DP[jdx-1][1], DP[jdx-1][2]) + G[jdx][0]
        DP[jdx][1] = min(DP[jdx-1][0], DP[jdx-1][2]) + G[jdx][1]
        DP[jdx][2] = min(DP[jdx-1][0], DP[jdx-1][1]) + G[jdx][2]
    }
    
    for kdx in (0..<3) {
        if idx == kdx { continue }
        Ans = Ans > DP[N-1][kdx] ? DP[N-1][kdx] : Ans
    }
})
*/

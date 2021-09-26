//
//  RGB거리_1149.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/09/24.
//  Copyright © 2021 MungGu. All rights reserved.
//

func boj1149() {
    let readInput: (() -> [Int]) = {
        var result: [Int] = []
        var temp = 0
        var isMinus = false
        for char in readLine()! {
            if char == " " {
                result.append(temp * (isMinus ? -1 : 1))
                temp = 0
                isMinus = false
                continue
            } else if char == "-" {
                isMinus = true
                continue
            }

            temp = temp * 10 + Int(char.asciiValue!) - 48
        }
        result.append(temp * (isMinus ? -1 : 1))
        return result
    }

    let N = readInput().first!
    let mx = 1000 * 1000 + 9
    var G: [[Int]] = []
    var cache = [[Int]](repeating: [Int](repeating: 0, count: 3), count: N+1)
    (0..<N).forEach { _ in
        G.append(readInput())
    }

    func resetCache() {
        cache = [[Int]](repeating: [Int](repeating: 0, count: 3), count: N+1)
    }

    // 색깔의 수
    print((0..<3).reduce(into: mx) { ans, idx in
        // 첫번째 집을 idx로 두었을때를 기준으로 최소비용을 계산
        (0..<3).forEach { jdx in
            if idx == jdx {
                cache[0][jdx] = G[0][jdx]
            } else {
                cache[0][jdx] = mx
            }
        }
        
        (1..<N).forEach { kdx in
            cache[kdx][0] = min(cache[kdx-1][1], cache[kdx-1][2]) + G[kdx][0]
            cache[kdx][1] = min(cache[kdx-1][0], cache[kdx-1][2]) + G[kdx][1]
            cache[kdx][2] = min(cache[kdx-1][0], cache[kdx-1][1]) + G[kdx][2]
        }
        
        let tAns = cache[N-1].min()!
        ans = ans > tAns ? tAns : ans
    })
}

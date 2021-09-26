//
//  File.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/09/25.
//  Copyright © 2021 MungGu. All rights reserved.
//

func boj9465() {
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

    let T = readInput().first!
    (0..<T).forEach { _ in
        let N = readInput().first!
        var cache = [[Int]](repeating: [Int](repeating: 0, count: 3), count: N)
        var G: [[Int]] = []
        (0..<2).forEach { _ in
            G.append(readInput())
        }
        
        cache[0][0] = 0
        cache[0][1] = G[0][0]
        cache[0][2] = G[1][0]
        (1..<N).forEach { idx in
            cache[idx][0] = max(cache[idx-1][1], cache[idx-1][2])
            cache[idx][1] = max(cache[idx-1][0], cache[idx-1][2]) + G[0][idx]
            cache[idx][2] = max(cache[idx-1][0], cache[idx-1][1]) + G[1][idx]
        }
        
        print(cache[N-1].max()!)
    }

}

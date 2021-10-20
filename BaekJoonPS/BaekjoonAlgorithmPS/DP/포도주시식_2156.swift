//
//  포도주시식_2156.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/09/24.
//  Copyright © 2021 MungGu. All rights reserved.
//

import Foundation

func boj2156() {
    let readInput = { Int(readLine()!)! }
    let n = readInput()
    var G: [Int] = []
    var cache = [Int](repeating: 0, count: n)
    (0..<n).forEach { _ in
        G.append(readInput())
    }
    
    func solve(_ n: Int) -> Int {
        cache[0] = G[0]
        if n == 0 {
            return cache[n]
        }
        
        cache[1] = G[0] + G[1]
        if n == 1 {
            return cache[n]
        }
        
        cache[2] = max(G[1] + G[2], max(cache[1], G[0] + G[2]))
        if n == 2 {
            return cache[n]
        }
        
        for idx in 3...n {
            cache[idx] = G[idx] + cache[idx-2]
            cache[idx] = max(cache[idx], G[idx] + G[idx-1] + cache[idx-3])
            cache[idx] = max(cache[idx], cache[idx-1])
        }
        
        return cache[n]
    }
    
    print(solve(n-1))
}

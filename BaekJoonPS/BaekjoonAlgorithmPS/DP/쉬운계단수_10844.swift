//
//  쉬운계단수_10844.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/09/25.
//  Copyright © 2021 MungGu. All rights reserved.
//

import Foundation

func boj10844() {
    let N = Int(readLine()!)!
    var cache = [[Int]](repeating: [Int](repeating: 0, count: 10), count: N+1)
    var chk = [Bool](repeating: false, count: N+1)
    let mod = Int(1e9)
    
    func solve(_ n: Int) -> Int {
        (1...9).forEach { num in
            cache[1][num] = 1
        }
        
        return go(n).reduce(0, +)
    }
    
    func go(_ n: Int) -> [Int] {
        if chk[n] { return cache[n] }
        chk[n] = true
        if n == 1 {
            return cache[n]
        }
        
        for num in 0...9 {
            if num != 0 {
                cache[n][num] = go(n-1)[num-1] % mod
            }
            
            if num != 9 {
                cache[n][num] += go(n-1)[num+1] % mod
            }
            
            cache[n][num] %= mod
        }
        return cache[n]
    }
    
    print(solve(N) % mod)
}

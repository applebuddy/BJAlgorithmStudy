//
//  피보나치함수_1003.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/09/24.
//  Copyright © 2021 MungGu. All rights reserved.
//

func boj1003() {
    let readInput = { Int(readLine()!)! }
    typealias Pair = (Int, Int)
    var cache = [Pair](repeating: (0, 0), count: 41)
    var chk = [Bool](repeating: false, count: 41)
    let T = readInput()
    (0..<T).forEach { _ in
        let n = readInput()
        go(n)
        print("\(cache[n].0) \(cache[n].1)")
    }

    @discardableResult
    func go(_ n: Int) -> Pair {
        if chk[n] { return cache[n] }
        chk[n] = true
        if n == 0 {
            cache[n].0 += 1
            return (1, 0)
        } else if n == 1 {
            cache[n].1 += 1
            return (0, 1)
        }
        
        cache[n].0 = go(n-1).0 + go(n-2).0
        cache[n].1 = go(n-1).1 + go(n-2).1
        return cache[n]
    }

}

//
//  1,2,3더하기_9095.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/09/24.
//  Copyright © 2021 MungGu. All rights reserved.
//

import Foundation

func boj9095() {
    var cache = [Int](repeating: 0, count: 20)

    let readInput: (() -> Int) = { Int(readLine()!)! }
    let T = readInput()
    (0..<T).forEach { _ in
        let N = readInput()
        print(go(N))
    }

    func go(_ n: Int) -> Int {
        if cache[n] > 0 { return cache[n] }
        if n <= 2 { return n }
        if n == 3 { return 4 }
        cache[n] = go(n - 1)
        cache[n] += go(n - 2)
        cache[n] += go(n - 3)
        return cache[n]
    }
}

//
//  숫자고르기_2668.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/09/26.
//  Copyright © 2021 MungGu. All rights reserved.
//

import Foundation

func boj2668() {
    let readInt: (() -> Int) = {
        var result = 0
        readLine()!.forEach {
            result = result * 10 + Int($0.asciiValue!) - 48
        }
        return result
    }

    let N = readInt()
    var G = [0]
    (0..<N).forEach { _ in
        G.append(readInt())
    }

    var chk = [Bool](repeating: false, count: 101)
    var ans = [Int](repeating: 0, count: N+1)
    var ansLen: Int = 0
    func go(_ start: Int, _ current: Int) {
        if chk[current] {
            if start == current {
                ans[ansLen] = start
                ansLen += 1
                return
            }
        } else {
            chk[current] = true
            go(start, G[current])
        }
    }

    (1...N).forEach { idx in
        chk = [Bool](repeating: false, count: 101)
        go(idx, idx)
    }

    print("\(ansLen)\n" + ans[0..<ansLen]
            .map { "\($0)" + ($0 == ans[ansLen-1] ? "" : "\n") }
            .joined())

}

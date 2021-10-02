//
//  수도쿠채점_9291.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/10/02.
//  Copyright © 2021 MungGu. All rights reserved.
//

import Foundation

func boj9291() {
    @discardableResult
    func readInput() -> [Int] {
        var temp = 0
        var result: [Int] = []
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

    let T = readInput().first!
    var chk = [[[Bool]]](repeating: [[Bool]](repeating: [Bool](repeating: false, count: 10), count: 3), count: 3)
    var rowChk = [[Bool]](repeating: [Bool](repeating: false, count: 10), count: 10)
    var colChk = [[Bool]](repeating: [Bool](repeating: false, count: 10), count: 10)
    var G = [[Int]]()

    func checkSDK() -> Bool {
        chk = [[[Bool]]](repeating: [[Bool]](repeating: [Bool](repeating: false, count: 10), count: 3), count: 3)
        rowChk = [[Bool]](repeating: [Bool](repeating: false, count: 10), count: 10)
        colChk = [[Bool]](repeating: [Bool](repeating: false, count: 10), count: 10)
        G = []
        (0..<9).forEach { _ in
            G.append(readInput())
        }
        
        for idx in G.indices {
            for jdx in G[idx].indices {
                let adx = idx / 3
                let bdx = jdx / 3
                if chk[adx][bdx][G[idx][jdx]]
                || rowChk[idx][G[idx][jdx]]
                || colChk[jdx][G[idx][jdx]] { return false }
                chk[adx][bdx][G[idx][jdx]] = true
                rowChk[idx][G[idx][jdx]] = true
                colChk[jdx][G[idx][jdx]] = true
            }
        }
        
        return true
    }

    print((1...T).reduce(into: "") { ans, cnt in
        ans += "Case \(cnt): " + (checkSDK() ? "CORRECT" : "INCORRECT")
        if cnt != T {
            ans += "\n"
            readInput()
        }
    })
}

//
//  월드컵_6987.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/09/27.
//  Copyright © 2021 MungGu. All rights reserved.
//

import Foundation

func boj6987() {
    let firstTeam = [0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 3, 3, 4]
    let secondTeam = [1, 2, 3, 4, 5, 2, 3, 4, 5, 3, 4, 5, 4, 5, 5]
    var G = [[Int]](repeating: [Int](), count: 6)
    var tG = [[Int]](repeating: [Int](repeating: 0, count: 3), count: 6)

    let readInput: (() -> [Int]) = {
        var result: [Int] = []
        var temp = 0
        readLine()!.forEach {
            if $0 == " " {
                result.append(temp)
                temp = 0
                return
            }
            
            temp = temp * 10 + Int($0.asciiValue!) - 48
        }
        result.append(temp)
        return result
    }

    func input() {
        G = [[Int]](repeating: [Int](), count: 6)
        tG = [[Int]](repeating: [Int](repeating: 0, count: 3), count: 6)
        let ip = readInput()
        for idx in ip.indices {
            let rdx = idx / 3
            G[rdx].append(ip[idx])
        }
    }

    func solution() {
        print((0..<4).reduce(into: "") { ans, _ in
            input()
            var isGood = false
            go(0, &isGood)
            ans += isGood ? "1 " : "0 "
        })
    }

    func go(_ stage: Int, _ good: inout Bool) {
        if good { return }
        if stage == firstTeam.count {
            for idx in 0..<6 {
                for jdx in 0..<3 {
                    if G[idx][jdx] != tG[idx][jdx] { return }
                }
            }
            
            good = true
            return
        }
        
        let leftTeam = firstTeam[stage]
        let rightTeam = secondTeam[stage]
        tG[leftTeam][0] += 1
        tG[rightTeam][2] += 1
        if G[leftTeam][0] >= tG[leftTeam][0], G[rightTeam][2] >= tG[rightTeam][2] {
            go(stage + 1, &good)
        }
        tG[leftTeam][0] -= 1
        tG[rightTeam][2] -= 1
        tG[leftTeam][2] += 1
        tG[rightTeam][0] += 1
        if G[leftTeam][2] >= tG[leftTeam][2], G[rightTeam][0] >= tG[rightTeam][0] {
            go(stage + 1, &good)
        }
        tG[leftTeam][2] -= 1
        tG[rightTeam][0] -= 1
        tG[leftTeam][1] += 1
        tG[rightTeam][1] += 1
        if G[leftTeam][1] >= tG[leftTeam][1], G[rightTeam][1] >= tG[rightTeam][1] {
            go(stage + 1, &good)
        }
        tG[leftTeam][1] -= 1
        tG[rightTeam][1] -= 1
    }

    solution()
}

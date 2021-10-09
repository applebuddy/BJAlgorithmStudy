//
//  늑대와양_16956.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/10/09.
//  Copyright © 2021 MungGu. All rights reserved.
//

import Foundation

func boj16956() {
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

    let ip = readInput()
    let (R, C) = (ip[0], ip[1])
    var G: [[Character]] = []
    (0..<R).forEach { _ in
        G.append(Array(readLine()!))
    }

    let dx = [0, 0, -1, 1]
    let dy = [1, -1, 0, 0]

    func canSaveSheeps() -> Int {
        for idx in G.indices {
            for jdx in G[idx].indices {
                if G[idx][jdx] != "S" { continue }
                for ddx in dx.indices {
                    let nx = idx + dx[ddx]
                    let ny = jdx + dy[ddx]
                    if nx < 0 || ny < 0 || nx >= R || ny >= C || G[nx][ny] == "S" { continue }
                    if G[nx][ny] == "W" { return 0 }
                    G[nx][ny] = "D"
                }
            }
        }
        return 1
    }

    if canSaveSheeps() == 0 {
        print(0)
    } else {
        print(G.reduce(into: ["1"]) { rowList, row in
            rowList.append(row.map { "\($0)" }.joined())
        }.joined(separator: "\n"))
    }
}

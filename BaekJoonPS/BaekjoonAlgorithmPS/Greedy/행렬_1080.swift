//
//  행렬_1080.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/10/09.
//  Copyright © 2021 MungGu. All rights reserved.
//

import Foundation

extension Array where Element == [Character] {
    mutating func toggle(from x: Int, y: Int) {
        for idx in x..<x+3 {
            for jdx in y..<y+3 {
                self[idx][jdx] = self[idx][jdx] == "0" ? "1" : "0"
            }
        }
    }
    
    func isEqual(to graph: [[Character]]) -> Bool {
        for idx in self.indices {
            for jdx in self[idx].indices {
                if self[idx][jdx] != graph[idx][jdx] { return false }
            }
        }
        return true
    }
}

func boj1080() {
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
    let (N, M) = (ip[0], ip[1])
    var fromG: [[Character]] = []
    var toG = fromG
    (0..<N).forEach { _ in
        fromG.append(Array(readLine()!))
    }

    (0..<N).forEach { _ in
        toG.append(Array(readLine()!))
    }

    func solve() -> Int {
        var toggleCount = 0
        if fromG.isEqual(to: toG) { return toggleCount }
        for idx in fromG.indices {
            for jdx in fromG[idx].indices {
                if fromG[idx][jdx] == toG[idx][jdx] { continue }
                if idx + 2 >= N || jdx + 2 >= M { continue }
                fromG.toggle(from: idx, y: jdx)
                toggleCount += 1
                if fromG.isEqual(to: toG) { return toggleCount }
            }
        }
        return -1
    }

    print(solve())
}

//
//  컴백홈_1189.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/10/10.
//  Copyright © 2021 MungGu. All rights reserved.
//

import Foundation

func boj1189() {
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
    let (R, C, K) = (ip[0], ip[1], ip[2])
    var G = [[Character]]()
    var ans = 0
    let dx = [0, 0, -1, 1]
    let dy = [-1, 1, 0, 0]
    var chk = [[Bool]](repeating: [Bool](repeating: false, count: C), count: R)
    (0..<R).forEach { _ in
        G.append(Array(readLine()!))
    }

    func DFS(_ x: Int, _ y: Int, _ k: Int) {
        if G[x][y] == "T" { return }
        if K == k {
            if x == 0 && y == C - 1 {
                ans += 1
            }
            return
        }
        
        for idx in dx.indices {
            let nx = x + dx[idx]
            let ny = y + dy[idx]
            if !(0..<R ~= nx && 0..<C ~= ny) { continue }
            if chk[nx][ny] || G[nx][ny] == "T" { continue }
            chk[nx][ny] = true
            DFS(nx, ny, k + 1)
            chk[nx][ny] = false
        }
    }

    chk[R-1][0] = true
    DFS(R-1, 0, 1)
    print(ans)
}

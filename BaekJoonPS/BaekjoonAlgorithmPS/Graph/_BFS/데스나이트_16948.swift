//
//  데스나이트_16948.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/09/26.
//  Copyright © 2021 MungGu. All rights reserved.
//

func boj16948() {
    let readInput: (() -> [Int]) = {
        var result: [Int] = []
        var temp = 0
        var isMinus = false
        for char in readLine()! {
            if char == " " {
                result.append(temp * (isMinus ? -1 : 1))
                temp = 0
                isMinus = false
                continue
            } else if char == "-" {
                isMinus = true
                continue
            }

            temp = temp * 10 + Int(char.asciiValue!) - 48
        }
        result.append(temp * (isMinus ? -1 : 1))
        return result
    }

    typealias Tuple = (x: Int, y: Int, t: Int)
    let N = readInput().first!
    let ip2 = readInput()
    let (r1, c1, r2, c2) = (ip2[0], ip2[1], ip2[2], ip2[3])
    var chk = [[Bool]](repeating: [Bool](repeating: false, count: N), count: N)
    let dx = [-2, -2, 0, 0, 2, 2]
    let dy = [-1, 1, -2, 2, -1,  1]

    func BFS(r: Int, c: Int, r2: Int, c2: Int) -> Int {
        var Q: [Tuple] = [(r, c, 0)]
        var cur = 0
        while cur < Q.count {
            let tp = Q[cur]
            cur += 1
            let (x, y, time) = (tp.0, tp.1, tp.2)
            for idx in dx.indices {
                let nx = x + dx[idx]
                let ny = y + dy[idx]
                if nx < 0 || ny < 0 || nx >= N || ny >= N { continue }
                if chk[nx][ny] { continue }
                chk[nx][ny] = true
                if nx == r2 && ny == c2 { return time+1 }
                Q.append((nx, ny, time+1))
            }
        }
        return -1
    }

    print(BFS(r: r1, c: c1, r2: r2, c2: c2))
}

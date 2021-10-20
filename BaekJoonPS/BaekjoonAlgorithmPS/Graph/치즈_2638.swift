//
//  치즈_2638.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/09/22.
//  Copyright © 2021 MungGu. All rights reserved.
//

// MARK: - 치즈 2638, BFS 문제풀이

/*
let readInput: (() -> [Character]) = {
    var result: [Character] = []
    readLine()!.forEach { char in
        if char == " " {
            return
        }
        
        result.append(char)
    }
    return result
}

typealias Pos = (x: Int, y: Int)
let dx = [0, 0, -1, 1]
let dy = [1, -1, 0, 0]
extension Array where Element == [Character] {
    mutating func meltIce() -> Bool {
        var queue: [Pos] = [(0, 0)]
        var meltChk = [[Int]](repeating: [Int](repeating: 0, count: self[0].count), count: self.count)
        var cur = 0
        while cur < queue.count {
            let node = queue[cur]
            cur += 1
            dx.indices.forEach { idx in
                let nx = node.x + dx[idx]
                let ny = node.y + dy[idx]
                if nx < 0 || ny < 0 || nx >= self.count || ny >= self[0].count { return }
                guard meltChk[nx][ny] != -1 else { return }
                if self[nx][ny] == "1" {
                    meltChk[nx][ny] += 1
                } else {
                    meltChk[nx][ny] = -1
                    queue.append((nx, ny))
                }
            }
        }

        var meltCount = 0
        for idx in self.indices {
            for jdx in self[0].indices {
                if meltChk[idx][jdx] >= 2 {
                    self[idx][jdx] = "0"
                    meltCount += 1
                }
            }
        }
        
        return meltCount == 0 ? false : true
    }
}

let ip = readLine()!.split(separator: " ").map { Int(String($0))! }
let (N, M) = (ip[0], ip[1])
var G: [[Character]] = []
(0..<N).forEach { _ in
    G.append(readInput())
}

var time = 0
while true {
    if G.meltIce() == false {
        print(time); break
    }
    time += 1
}
*/

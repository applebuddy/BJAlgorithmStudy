//
//  비숍_1799.swift
//  BaekjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/11/30.
//  Copyright © 2021 MungGu. All rights reserved.
//

func boj_1799() {
    let N = Int(readLine()!)!
    var ans = 0
    var G = [[Int]]()
    var t = [Int]()
    (0..<N).forEach { _ in
        G.append(readLine()!.split(separator: " ").map { Int(String($0))! })
    }

    var BV = [(Int, Int)]()

    for i in G.indices {
        for j in G[i].indices {
            if G[i][j] == 1 {
                BV.append((i, j))
            }
        }
    }

    var C = [Bool](repeating: false, count: BV.count)

    func canPlace(at x: Int, y: Int, to: Int) -> Bool {
        for i in 0...to {
            let p = (x: BV[i].0, y: BV[i].1)
            if (p.x == x && p.y == y) || !C[i] { continue }
            var dx = p.x - x
            dx *= dx > 0 ? 1 : -1
            var dy = p.y - y
            dy *= dy > 0 ? 1 : -1
            if dx == dy { return false }
        }
        
        return true
    }

    func DFS(_ bdx: Int, _ cnt: Int) {
        if bdx >= BV.count { return }
        
        let originC = C
        for i in BV[bdx...].indices {
            let pos = BV[i]
            let x = pos.0
            let y = pos.1
            if canPlace(at: x, y: y, to: i) {
                C[i] = true
                ans = ans < cnt+1 ? cnt+1 : ans
                DFS(i+1, cnt+1)
            }
            
            C = originC
        }
    }

    DFS(0, 0)
    print(ans)
}

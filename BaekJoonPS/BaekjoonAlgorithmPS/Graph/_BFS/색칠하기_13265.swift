//
//  색칠하기_13265.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/09/27.
//  Copyright © 2021 MungGu. All rights reserved.
//

func boj13265() {
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
    
    let T = readInput().first!
    var G: [[Int]] = []
    var chk: [Int] = []
    
    (0..<T).forEach { _ in
        print(solve() ? "possible" : "impossible")
    }
    
    func chkG() -> Bool {
        for a in 1..<G.count {
            for b in G[a] {
                if chk[a] == chk[b] { return false }
            }
        }
        return true
    }
    
    func bfs(_ num: Int) -> Bool {
        var queue = [num]
        chk[num] = 1
        var cur = 0
        while cur < queue.count {
            let node = queue[cur]
            cur += 1
            for idx in G[node].indices {
                let next = G[node][idx]
                // 방문 하지 않았다면
                if chk[next] == -1 {
                    chk[next] = 1 - chk[node]
                    queue.append(next)
                } else if chk[next] == chk[node] { return false }
            }
        }
        return true
    }
    
    func solve() -> Bool {
        let ip = readInput()
        let (N, M) = (ip[0], ip[1])
        G = [[Int]](repeating: [Int](), count: N+1)
        chk = [Int](repeating: -1, count: N+1)
        (0..<M).forEach { _ in
            let ip2 = readInput()
            let (a, b) = (ip2[0], ip2[1])
            G[a].append(b)
            G[b].append(a)
        }
        
        for num in (1...N) {
            if chk[num] != -1 { continue }
            if !bfs(num) {
                return false
            }
        }
        
        return true
    }
}

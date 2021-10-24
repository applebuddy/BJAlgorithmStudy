//
//  숨바꼭질_6118.swift
//  BaekjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/10/24.
//  Copyright © 2021 MungGu. All rights reserved.
//

func boj6118() {
    let ip = readLine()!.split(separator: " ").map { Int(String($0))! }
    let (N, M) = (ip[0], ip[1])
    var G = [[Int]](repeating: [Int](), count: N+1)
    (0..<M).forEach { _ in
        let ip2 = readLine()!.split(separator: " ").map { Int(String($0))! }
        let (from, to) = (ip2[0], ip2[1])
        G[from].append(to)
        G[to].append(from)
    }

    var chk = [Bool](repeating: false, count: N+1)
    var ans = [Int](repeating: Int.max, count: N+1)
    var ans2 = 0
    var cnt = [Int](repeating: 0, count: N+1)
    func BFS() -> String {
        chk[1] = true
        var Q = [[1, 0]]
        var cur = 0
        while cur < Q.count {
            let node = Q[cur][0]
            let dist = Q[cur][1]
            cur += 1
            G[node].forEach { next in
                if chk[next] { return }
                chk[next] = true
                cnt[dist+1] += 1
                if ans2 <= dist+1 {
                    ans2 = dist+1
                }
                
                if ans[dist+1] > next {
                    ans[dist+1] = next
                }
                
                Q.append([next, dist+1])
            }
        }
        return "\(ans[ans2]) \(ans2) \(cnt[ans2])"
    }

    print(BFS())
}

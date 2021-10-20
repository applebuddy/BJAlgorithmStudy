//
//  ACM_Craft_!005.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/01/03.
//  Copyright © 2021 MungGu. All rights reserved.
//

// MARK: - topology sort problem

/*
import Foundation

let ip: (() -> [Int]) = {
  let S = readLine()!
  var tmp = 0
  var result: [Int] = []
  S.forEach {
    if $0 == " " {
      result.append(tmp)
      tmp = 0
      return
    }
    tmp = tmp * 10 + Int($0.unicodeScalars.first!.value) - 48
  }
  result.append(tmp)
  return result
}

func solve() {
    let ar0 = ip()
    let (N, K) = (ar0[0], ar0[1])
    var C = [Int](repeating: 0, count: N+1)
    var P = [Int](repeating: 0, count: N+1)
    var G = [[Int]](repeating: [Int](), count: N+1)
    let pList = ip()
    (1...N).forEach {
        P[$0] = pList[$0-1]
    }
    var AL = P
    
    (0..<K).forEach { _ in
        let order = ip()
        G[order[0]].append(order[1])
        C[order[1]] += 1
    }
    let target = ip().first!
    if C[target] == 0 { print(P[target]); return }
    
    var Q: [Int] = []
    var cur = 0
    (0...N).forEach { node in
        if C[node] == 0 {
            Q.append(node)
        }
    }
    
    while cur < Q.count {
        if Q.count > 3000 {
            Q.replaceSubrange(..<cur, with: [])
            cur = 0
        }
        
        let node = Q[cur]
        cur += 1
        for idx in G[node].indices {
            let next = G[node][idx]
            C[next] -= 1
            if AL[next] < AL[node] + P[next] {
                AL[next] = AL[node] + P[next]
            }
            
            if C[next] == 0 {
                Q.append(next)
            }
        }
    }
    print(AL[target])
}

let T = ip().first!
(0..<T).forEach { _ in solve() }
*/


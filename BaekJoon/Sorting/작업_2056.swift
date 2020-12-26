//
//  작업_2056.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/12/27.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

/*
let ip = { Int(readLine()!)! }
let ip2: (() -> [Int]) = {
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

let N = ip()
var G = [[Int]](repeating: [Int](), count: N+1)
var C = [Int](repeating: 0, count: N+1)
var P = [Int](repeating: 0, count: N+1)
var AL = P
(1...N).forEach { node in
    let arr = ip2()
    P[node] = arr[0]
    AL[node] = P[node]
    (2..<arr.count).forEach { tdx in
        G[node].append(arr[tdx])
        C[arr[tdx]] += 1
    }
}

var Q: [Int] = []
var cur = 0
var result = 0

(1...N).forEach { node in
    if C[node] == 0 {
        Q.append(node)
    }
}

while cur < Q.count {
    let node = Q[cur]
    cur += 1
    for idx in G[node].indices {
        let next = G[node][idx]
        if AL[next] < AL[node] + P[next] {
            AL[next] = AL[node] + P[next]
        }
        C[next] -= 1
        if C[next] == 0 {
            Q.append(next)
        }
    }
}

print(AL.max()!)
*/

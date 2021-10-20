//
//  비슷한단어_1411.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/10/13.
//  Copyright © 2021 MungGu. All rights reserved.
//

import Foundation

func boj1411() {
    let N = Int(readLine()!)!
    var G = [String]()
    var lenList = [Int]()
    for _ in 0..<N {
        let ip = readLine()!
        lenList.append(ip.count)
        G.append(ip)
    }

    func solve() -> Int {
        var result = 0
        if N == 1 { return 0 }
        for idx in 0..<G.count-1 {
            for jdx in idx+1..<G.count {
                if lenList[idx] != lenList[jdx] { continue }
                var dic = [String](repeating: "", count: 123)
                var dic2 = [String](repeating: "", count: 123)
                G[idx].enumerated().forEach { kdx, char in
                    dic[Int(char.asciiValue!)] += "\(kdx)"
                }
                G[jdx].enumerated().forEach { kdx, char in
                    dic2[Int(char.asciiValue!)] += "\(kdx)"
                }
                var good = true
                for kdx in G[idx].indices {
                    if dic[Int(G[idx][kdx].asciiValue!)] != dic2[Int(G[jdx][kdx].asciiValue!)] { good = false; break }
                }
                result += good ? 1 : 0
            }
        }
        return result
    }

    print(solve())
}

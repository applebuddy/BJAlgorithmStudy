//
//  가로세로퍼즐_2784.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/10/03.
//  Copyright © 2021 MungGu. All rights reserved.
//

func boj2784() {
    var G = [String]()
    var cG = [[Character]]()
    var mx = 6
    var ansList = [[String]]()
    var chk = [Int](repeating: -1, count: mx)
    (0..<mx).forEach { _ in
        let ip = readLine()!
        G.append(ip)
        cG.append(Array(ip))
    }

    func validStringList() -> [String] {
        let tcG = chk.reduce(into: []) { $0.append(cG[$1]) }
        if tcG[0][0] == tcG[3][0] && tcG[1][0] == tcG[3][1] && tcG[2][0] == tcG[3][2]
            && tcG[0][1] == tcG[4][0] && tcG[1][1] == tcG[4][1] && tcG[2][1] == tcG[4][2]
            && tcG[0][2] == tcG[5][0] && tcG[1][2] == tcG[5][1] && tcG[2][2] == tcG[5][2] {
            return chk.reduce(into: []) { $0.append(G[$1]) }
        }
        return []
    }

    func DFS(_ idx: Int, _ cnt: Int) {
        if cnt == mx {
            let stringList = validStringList()
            if !stringList.isEmpty {
                ansList.append(stringList)
            }
            return
        }
        
        for jdx in G.indices {
            if chk[jdx] >= 0 { continue }
            chk[jdx] = cnt
            DFS(idx+1, cnt+1)
            chk[jdx] = -1
        }
    }

    func solve() {
        DFS(0, 0)
        if ansList.isEmpty { print(0) }
        else { print(ansList.sorted { $0[0] + $0[1] + $0[2] < $1[0] + $1[1] + $1[2] }
                        .first![0..<3]
                        .joined(separator: "\n")) }
    }

    solve()
}

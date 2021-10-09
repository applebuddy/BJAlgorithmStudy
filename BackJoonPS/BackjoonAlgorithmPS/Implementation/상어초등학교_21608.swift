//
//  상어초등학교_21608.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/10/09.
//  Copyright © 2021 MungGu. All rights reserved.
//

import Foundation

func boj21608() {
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
    
    let N = Int(readLine()!)!
    var G = [[Int]](repeating: [Int](repeating: 0, count: N), count: N)
    let dx = [0, 0, -1, 1]
    let dy = [1, -1, 0, 0]
    var favDic = [[Int]](repeating: [Int](), count: N*N+1)
    func placeStudent(_ student: inout [Int]) {
        let studentNumber = student.first!
        let favoriteList = Array(student[1...])
        favDic[studentNumber] = favoriteList
        var cntList = [[Int]]()
        for idx in G.indices {
            for jdx in G[idx].indices {
                if G[idx][jdx] > 0 { continue }
                var emptyCnt = 0
                var favoriteCnt = 0
                for tdx in dx.indices {
                    let nx = idx + dx[tdx]
                    let ny = jdx + dy[tdx]
                    if nx < 0 || ny < 0 || nx >= N || ny >= N { continue }
                    if G[nx][ny] == 0 { emptyCnt += 1; continue }
                    if favoriteList.contains(G[nx][ny]) {
                        favoriteCnt += 1
                    }
                }
                cntList.append([idx, jdx, favoriteCnt, emptyCnt])
            }
        }
        
        let result = cntList.sorted {
            $0[2] > $1[2]
                || $0[2] == $1[2] && $0[3] > $1[3]
                || $0[2] == $1[2] && $0[3] == $1[3] && ($0[0] < $1[0] && $0[1] < $1[1])
        }.first!
        G[result[0]][result[1]] = studentNumber
    }
    
    func calculateSatisfactionScore() -> Int {
        var favCntScoreList = [0, 1, 10, 100, 1000]
        var result = 0
        for idx in G.indices {
            for jdx in G[idx].indices {
                var favCnt = 0
                for tdx in dx.indices {
                    let nx = idx + dx[tdx]
                    let ny = jdx + dy[tdx]
                    if nx < 0 || ny < 0 || nx >= N || ny >= N { continue }
                    if favDic[G[idx][jdx]].contains(G[nx][ny]) { favCnt += 1 }
                }
                result += favCntScoreList[favCnt]
            }
        }
        return result
    }
    
    (0..<N*N).forEach { _ in
        var student = readInput()
        placeStudent(&student)
    }
    
    print(calculateSatisfactionScore())
}

//
//  2048(Easy)_12100.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/09/23.
//  Copyright © 2021 MungGu. All rights reserved.
//

// MARK: - 2048(Easy) 12100 Implementation 문제풀이

/*
import Foundation

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

let N = readInput().first!
var G: [[Int]] = []
var C = [[Bool]](repeating: [Bool](repeating: false, count: N), count: N)

let dx = [-1, 0, 0, 1]
let dy = [0, -1, 1, 0]
var answer = 0

func resetC() {
    C = [[Bool]](repeating: [Bool](repeating: false, count: N), count: N)
}

var moveCnt = 0
func moveSingleBlock(at pos: (x: Int, y: Int), dir: Int) {
    var ox = pos.x
    var oy = pos.y
    while true {
        let nx = ox + dx[dir]
        let ny = oy + dy[dir]
        if nx < 0 || ny < 0 || nx >= N || ny >= N { return }
        if G[ox][oy] > 0 && G[ox][oy] == G[nx][ny] && C[nx][ny] == false {
            C[nx][ny] = true
            G[nx][ny] *= 2
            answer = answer < G[nx][ny] ? G[nx][ny] : answer
            G[ox][oy] = 0
            moveCnt += 1
            return
        }

        if G[nx][ny] == 0 && G[ox][oy] > 0 {
            G[nx][ny] = G[ox][oy]
            G[ox][oy] = 0
            moveCnt += 1
        } else { return }
        ox = nx
        oy = ny
    }
}

func moveAllBlock(dir: Int) -> Bool {
    moveCnt = 0
    resetC()
    switch dir {
    case 0:
        // Up, dir: 0
        for i in G.indices {
            for j in G[i].indices {
                moveSingleBlock(at: (i, j), dir: dir)
            }
        }
    case 1:
        // Left, dir: 1
        for i in G.indices {
            for j in G[i].indices {
                moveSingleBlock(at: (j, i), dir: dir)
            }
        }
    case 2:
        // Right, dir: 2
        for i in G.indices {
            for j in G[i].indices {
                moveSingleBlock(at: (j, N - i - 1), dir: dir)
            }
        }
    case 3:
        // Down, dir: 3
        for i in G.indices {
            for j in G[i].indices {
                moveSingleBlock(at: (N - i - 1, j), dir: dir)
            }
        }
    default:
        break
    }

//    G.forEach { list in
//        print(list.map { "\($0)" }.joined(separator: " "))
//    }
    
    return moveCnt > 0
}

func DFS(cnt: Int) {
    if cnt >= 5 { return }
    let originG = G
    (0...3).forEach { dir in
        if moveAllBlock(dir: dir) {
            DFS(cnt: cnt + 1)
        }
        G = originG
    }
}

(0..<N).forEach { _ in
    let ip2 = readInput()
    let mx = ip2.max()!
    answer = answer < mx ? mx : answer
    G.append(ip2)
}

DFS(cnt: 0)
print(answer)
*/

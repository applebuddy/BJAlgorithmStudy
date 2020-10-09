
// MARK: - 네모네모 시력검사

// MARK: Implementation swift 문제풀이

import Foundation

let ip = { readLine()! }
let arr = ip().split(separator: " ").map { Int(String($0))! }
let N = arr[0], M = arr[1]
var G = [[Character]]()
let dx = [0, 1, 0, -1]
let dy = [1, 0, -1, 0]
var ddx = 0
var ansDic = [0: "UP", 1: "RIGHT", 2: "DOWN", 3: "LEFT"]

(0 ..< N).forEach { _ in
    G.append(Array(ip()))
}

func checkDir(_ x: Int, _ y: Int) {
    var x = x, y = y
    while true {
        let nx = x + dx[ddx]
        let ny = y + dy[ddx]
        if nx < 0 || ny < 0 || nx >= N || ny >= M {
            ddx += 1
            continue
        }

        if G[nx][ny] == "#" {
            x = nx
            y = ny
        } else {
            let nddx = (ddx + 1) % 4
            let tx = x + dx[nddx]
            let ty = y + dy[nddx]
            if G[tx][ty] == "#" {
                ddx = nddx
                continue
            } else {
                print(ansDic[ddx]!)
                return
            }
        }
    }
}

for idx in G.indices {
    for jdx in G[idx].indices {
        if G[idx][jdx] == "#" {
            checkDir(idx, jdx)
            exit(0)
        }
    }
}

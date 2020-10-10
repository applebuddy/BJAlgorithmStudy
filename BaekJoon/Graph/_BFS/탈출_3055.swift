
// MARK: - 탈출 3055

// MARK: BFS swift 문제풀이

import Foundation

struct DoubleStackQueue<T> {
    var leftStack = [T]()
    var rightStack = [T]()

    var front: T? {
        if !leftStack.isEmpty {
            return leftStack.last
        } else {
            if rightStack.isEmpty {
                return nil
            } else {
                return rightStack.first
            }
        }
    }

    var isEmpty: Bool {
        return leftStack.isEmpty && rightStack.isEmpty
    }

    mutating func push(_ val: T) {
        rightStack.append(val)
    }

    mutating func pop() {
        if leftStack.isEmpty {
            if !rightStack.isEmpty {
                leftStack = rightStack.reversed()
                rightStack = []
            } else { return }
        }
        leftStack.removeLast()
    }
}

typealias Pair = (Int, Int)
typealias PPair = (Int, Int, Int)
let ip = { readLine()! }
let arr = ip().split(separator: " ").map { Int(String($0))! }
let N = arr[0], M = arr[1]
var G = [[Character]]()
var stPos: Pair = (-1, -1)
let dx = [0, 0, -1, 1]
let dy = [-1, 1, 0, 0]

(0 ..< N).forEach { _ in
    G.append(Array(ip()))
}

var chkV = [[Bool]](repeating: [Bool](repeating: false, count: M), count: N)

extension Array where Element == [Character] {
    mutating func moveWater() {
        var tG = self
        for idx in indices {
            for jdx in self[idx].indices {
                if self[idx][jdx] != "*" { continue }
                for ddx in 0 ..< dx.count {
                    let nx = idx + dx[ddx]
                    let ny = jdx + dy[ddx]
                    if nx < 0 || ny < 0 || nx >= N || ny >= M { continue }
                    if self[nx][ny] == "." {
                        tG[nx][ny] = "*"
                    }
                }
            }
        }

        self = tG
    }
}

for idx in G.indices {
    for jdx in G[idx].indices {
        if G[idx][jdx] == "S" {
            stPos = (idx, jdx)
            chkV[idx][jdx] = true
            break
        }
    }
    if stPos.0 != -1 { break }
}

var pTime = 1
func BFS(_ pos: Pair) {
    var Q = DoubleStackQueue<PPair>()
    Q.push((pos.0, pos.1, 0))
    while !Q.isEmpty {
        let nPos = Q.front!
        Q.pop()
        let x = nPos.0
        let y = nPos.1
        let time = nPos.2
        if pTime < time + 1 {
            pTime = time + 1
            G.moveWater()
        }

        if G[x][y] == "*" { continue }
        for ddx in 0 ..< dx.count {
            let nx = x + dx[ddx]
            let ny = y + dy[ddx]
            if nx < 0 || ny < 0 || nx >= N || ny >= M { continue }
            if chkV[nx][ny] { continue }
            if G[nx][ny] == "X" || G[nx][ny] == "*" { continue }
            if G[nx][ny] == "D" {
                print(time + 1)
                exit(0)
            }

            chkV[nx][ny] = true
            Q.push((nx, ny, time + 1))
        }
    }
}

BFS(stPos)
print("KAKTUS")


// MARK: - 사다리조작 15684

// MARK: Backtracking swift 문제풀이

import Foundation

var isValid = false

let input: (() -> [Int]) = {
    var result: [Int] = []
    var temp = 0
    readLine()!.forEach {
        if $0 == " " { result.append(temp); temp = 0; return }
        temp = temp * 10 + (Int($0.asciiValue!) - 48)
    }
    result.append(temp)
    return result
}

let arr = input()
let (N, M, H) = (arr[0], arr[1], arr[2])

if M == 0 { print(0); exit(0) }
var G = [[Int]](repeating: [Int](repeating: -1, count: 31), count: 31)
var PV = [(Int, Int)]()
(0 ..< M).forEach { _ in
    let ip = input()
    let (A, B) = (ip[0], ip[1])
    G[A][B] = B + 1
    G[A][B + 1] = B
}

(1 ... H).forEach { idx in
    (1 ... N).forEach { jdx in
        if G[idx][jdx] == -1, G[idx][jdx + 1] == -1 { PV.append((idx, jdx)) }
    }
}

var idxList: [Int] = []
func testLaddar() -> Bool {
    for jdx in 1 ... N {
        var h = jdx
        (1 ... H).forEach { idx in
            if G[idx][h] == -1 { return }
            h = G[idx][h]
        }
        if h != jdx { return false }
    }
    return true
}

func DFS(_ N: Int, _ lastIdx: Int) {
    if idxList.count >= N || isValid {
        if testLaddar() {
            isValid = true
        }
        return
    }

    if lastIdx > PV.count - 1 { return }

    (lastIdx ... PV.count - 1).forEach {
        let A = PV[$0].0
        let B = PV[$0].1
        if G[A][B] >= 0 || G[A][B + 1] >= 0 { return }
        G[A][B] = B + 1
        G[A][B + 1] = B
        idxList.append($0)
        DFS(N, $0 + 1)
        idxList.removeLast()
        G[A][B] = -1
        G[A][B + 1] = -1
    }
}

(0 ... min(H, 3)).forEach {
    idxList = []
    DFS($0, 0)
    if isValid { print($0); exit(0) }
}

print(-1)

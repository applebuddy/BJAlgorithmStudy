
// MARK: - 네트워크 연결 1922

// MARK: MST swift 문제풀이

func getParent(_ node: Int, _ parent: inout [Int]) -> Int {
    if parent[node] == node {
        return node
    }

    return getParent(parent[node], &parent)
}

func mergeParent(_ aNode: Int, _ bNode: Int, _ parent: inout [Int]) {
    let nodeA = parent[aNode]
    let nodeB = parent[bNode]
    if nodeA > nodeB {
        parent[nodeB] = nodeA
    } else {
        parent[nodeA] = nodeB
    }
}

let N = Int(readLine()!)!
let M = Int(readLine()!)!
var parent = [Int](0 ... N)
var G = [(Int, Int, Int)]()

(0 ..< M).forEach { _ in
    let arr = readLine()!.split(separator: " ").map { Int(String($0))! }
    G.append((arr[0], arr[1], arr[2]))
}

G.sort { $0.2 < $1.2 }
let gLen = G.count

var cnt = 0
var Ans = 0
var idx = 0
while idx < gLen {
    let from = getParent(G[idx].0, &parent)
    let to = getParent(G[idx].1, &parent)
    if from != to {
        mergeParent(from, to, &parent)
        cnt += 1
        Ans += G[idx].2
    }

    idx += 1
}

print(Ans)

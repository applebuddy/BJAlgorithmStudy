
// MARK: - 치킨배달 15686

// MARK: BruteForce swift 문제풀이

let arr = readLine()!.split(separator: " ").map { Int(String($0))! }
let N = arr[0], M = arr[1]
var G = [[Character]]()
var order = [Int]()
var Ans = Int.max
(0 ..< N).forEach { _ in
    let str = Array(readLine()!)
    var rowList = [Character]()
    var sdx = 0
    while sdx < str.count {
        rowList.append(str[sdx])
        sdx += 2
    }
    G.append(rowList)
}

var hList = [(Int, Int)]()
var cList = [(Int, Int)]()
for idx in G.indices {
    for jdx in G[idx].indices {
        if G[idx][jdx] == "1" {
            hList.append((idx, jdx))
        } else if G[idx][jdx] == "2" {
            cList.append((idx, jdx))
        }
    }
}

func getChickenDist() -> Int {
    var result = 0
    hList.forEach { hPos in
        var tDist = Int.max
        order.forEach { idx in
            let oPos = cList[idx]
            let diffX = hPos.0 - oPos.0 > 0 ? hPos.0 - oPos.0 : oPos.0 - hPos.0
            let diffY = hPos.1 - oPos.1 > 0 ? hPos.1 - oPos.1 : oPos.1 - hPos.1
            let ttDist = diffX + diffY
            tDist = tDist > ttDist ? ttDist : tDist
        }
        result += tDist
    }
    return result
}

func DFS(_ n: Int) {
    if order.count + M - n < n { return }
    if n == M {
        Ans = min(Ans, getChickenDist())
        return
    }

    var idx = order.isEmpty ? 0 : order.last! + 1
    while idx < cList.count {
        order.append(idx)
        DFS(n + 1)
        order.removeLast()
        idx += 1
    }
}

DFS(0)
print(Ans)

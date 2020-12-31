
// MARK: - 쿼드트리

// MARK: Recursion swift 문제풀이

let N = Int(readLine()!)!
var G = [[Character]]()
var result = ""
(0 ..< N).forEach { _ in
    G.append(Array(readLine()!))
}

func checkArea(_ x: Int, _ y: Int, _ len: Int) -> Int {
    let target = G[x][y]
    var isEqual = true
    for idx in x ..< x + len {
        for jdx in y ..< y + len {
            if target != G[idx][jdx] { isEqual = false; break }
        }
        if !isEqual { break }
    }

    return isEqual ? (target == "0" ? 0 : 1) : 2
}

func DFS(_ x: Int, _ y: Int, _ len: Int) {
    let equalValue = checkArea(x, y, len)
    if equalValue <= 1 {
        result += "\(equalValue)"
        return
    }

    result += "("
    DFS(x, y, len / 2)
    DFS(x, y + len / 2, len / 2)
    DFS(x + len / 2, y, len / 2)
    DFS(x + len / 2, y + len / 2, len / 2)
    result += ")"
}

DFS(0, 0, N)
print(result)

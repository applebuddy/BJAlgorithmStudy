
// MARK: - 색종이 만들기 2630

// MARK: Recursion swift 문제풀이

let N = Int(readLine()!)!
var cnt = [0, 0]

var G: [[String]] = []
(0 ..< N).forEach { _ in
    let arr = readLine()!.split(separator: " ").map { String($0) }
    G.append(arr)
}

func checkArea(_ x: Int, _ y: Int, _ len: Int) -> Int {
    var isEqual = true
    let target = G[x][y]
    for idx in x ..< x + len {
        for jdx in y ..< y + len {
            if target != G[idx][jdx] { isEqual = false; break }
        }
        if !isEqual { break }
    }
    return isEqual ? (target == "0" ? 0 : 1) : 2
}

func DFS(_ x: Int, _ y: Int, _ len: Int) {
    let result = checkArea(x, y, len)
    if result <= 1 {
        cnt[result] += 1
        return
    }

    DFS(x, y, len / 2)
    DFS(x + len / 2, y, len / 2)
    DFS(x, y + len / 2, len / 2)
    DFS(x + len / 2, y + len / 2, len / 2)
}

DFS(0, 0, N)
print(cnt[0], cnt[1], separator: "\n")


// MARK: - 종이의 개수 1780

// MARK: Recursion swift 문제풀이

let N = Int(readLine()!)!
var Ans = [0, 0, 0]

extension Character {
    var iValue: Int {
        return self == "0" ? 0 : (self == "1" ? 1 : -1)
    }
}

var G = [[Character]]()
(0 ..< N).forEach { _ in
    let arr = Array(readLine()!)
    var now = [Character]()
    var idx = 0
    while idx < arr.count {
        if arr[idx] == "0" {
            now.append("0")
            idx += 2
        } else if arr[idx] == "1" {
            now.append("1")
            idx += 2
        } else if arr[idx] == "-" {
            now.append("-")
            idx += 3
        }
    }

    G.append(now)
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

    return isEqual ? target.iValue : 2
}

func DFS(_ x: Int, _ y: Int, _ len: Int) {
    let result = checkArea(x, y, len)
    if result <= 1 {
        Ans[result + 1] += 1
        return
    }

    let length = len / 3
    DFS(x, y, length)
    DFS(x + length, y, length)
    DFS(x + 2 * length, y, length)
    DFS(x, y + length, length)
    DFS(x + length, y + length, length)
    DFS(x + 2 * length, y + length, length)
    DFS(x, y + 2 * length, length)
    DFS(x + length, y + 2 * length, length)
    DFS(x + 2 * length, y + 2 * length, length)
}

DFS(0, 0, N)
print(Ans[0], Ans[1], Ans[2], separator: "\n")

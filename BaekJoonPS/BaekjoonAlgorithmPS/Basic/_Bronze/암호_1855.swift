
// MARK: 암호 1855

// MARK: swift 문제풀이

let ip = { readLine()! }
let N = Int(ip())!
let S = Array(ip()).map { String($0) }
let len = S.count
var isReverse = false
var G = [[String]](repeating: [String](repeating: "", count: N), count: len / N)

var prevRow = 0
for idx in S.indices {
    let row = idx / N
    if isReverse {
        let col = N - (idx % N) - 1
        G[row][col] = S[idx]
    } else {
        let col = idx % N
        G[row][col] = S[idx]
    }

    if prevRow < (idx + 1) / N {
        prevRow = (idx + 1) / N
        isReverse.toggle()
    }
}

let cLen = N
let rLen = len / N
var Ans = ""
for idx in 0 ..< cLen {
    for jdx in 0 ..< rLen {
        Ans += G[jdx][idx]
    }
}

print(Ans)

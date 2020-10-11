
// MARK: - 방 배정 13300

// MARK: swift 문제풀이

let ip = { readLine()!.split(separator: " ").map { Int(String($0))! } }
let arr = ip()
let N = arr[0], K = arr[1]
var G = [[Int]](repeating: [0, 0], count: 6)

(0 ..< N).forEach { _ in
    let arr2 = ip()
    G[arr2[1] - 1][arr2[0]] += 1
}

print(G.reduce(into: 0) {
    $0 += $1[0] == 0 ? 0 : (($1[0] - 1) / K + 1)
    $0 += $1[1] == 0 ? 0 : (($1[1] - 1) / K + 1)
})

/*
let ip = { readLine()! }
let arr = ip().split(separator: " ").map { Int(String($0))! }
let N = arr[0], K = arr[1]
var G = [[Int]](repeating: [0, 0], count: 6)

(0..<N).forEach { _ in
    let arr2 = ip().split(separator: " ").map { Int(String($0))! }
    let S = arr2[0], Y = arr2[1]
    G[Y-1][S] += 1
}

var Ans = 0
G.forEach {
    Ans += $0[0] == 0 ? 0 : (($0[0]-1) / K + 1)
    Ans += $0[1] == 0 ? 0 : (($0[1]-1) / K + 1)
}

print(Ans)
*/

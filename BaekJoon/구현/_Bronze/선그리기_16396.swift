
// MARK: - 선 그리기 16396
// MARK: Implementation swift 문제풀이

/*
let N = Int(readLine()!)!
var G = [Int](repeating: 0, count: 10001)
var C = [Int](repeating: 0, count: 10001)
var mn = 10001, mx = 0
var len = 0
var Ans = 0
for _ in 0..<N {
    let arr = readLine()!.split(separator: " ").map { Int($0)! }
    let from = arr[0], to = arr[1]
    if from == to { continue }
    for i in from...to-1 {
        if G[i] != 0 && G[i+1] != 0 && C[i] != 0 { continue }
        C[i] = 1
        G[i] = 1
        G[i+1] = 1
        Ans += 1
    }
}

print(Ans)
*/

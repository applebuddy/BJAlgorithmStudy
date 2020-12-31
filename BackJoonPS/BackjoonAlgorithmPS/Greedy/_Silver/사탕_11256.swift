
// MARK: - 사탕 11256
// MARK: Greedy swift 문제풀이

/*
let T = Int(readLine()!)!

for _ in 0..<T {
    let arr = readLine()!.split(separator: " ").map { Int($0)! }
    let j = arr[0], N = arr[1]
    var G = [Int]()
    for _ in 0..<N {
        let p = readLine()!.split(separator: " ").map { Int($0)! }
        G.append(p[0]*p[1])
    }
    G.sort { $0 > $1 }
    var now = 0, Ans = 0
    for i in G.indices {
        now += G[i]
        Ans += 1
        if now >= j { break }
    }
    print(Ans)
}
*/

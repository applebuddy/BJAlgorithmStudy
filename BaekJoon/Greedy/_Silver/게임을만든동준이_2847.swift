
// MARK: - 게임을 만든 동준이 2847

// MARK: Greedy swift 문제풀이

let ip = { Int(readLine()!)! }
let N = ip()
var prev = -1
var G = [Int]()
(0 ..< N).forEach { _ in G.append(ip()) }
print(G.reversed().reduce(into: 0) { base, now in
    if prev != -1, now >= prev {
        base += now - prev + 1
        prev -= 1
    } else {
        prev = now
    }
})

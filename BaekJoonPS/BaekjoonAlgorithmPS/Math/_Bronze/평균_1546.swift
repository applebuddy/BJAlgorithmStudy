
// MARK: - 평균 1546

// MARK: swift 문제풀이

let ip = { readLine() }
ip()
let G = ip()!.split(separator: " ").map { Float(String($0))! }
let mxValue = G.max()!
print(G.reduce(into: 0.0) { $0 = $0 + $1 / mxValue * 100 } / Float(G.count))

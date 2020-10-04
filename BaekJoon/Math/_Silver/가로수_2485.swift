
// MARK: - 가로수 2485

// MARK: GCD swift 문제풀이

func getGCD(_ A: Int, _ B: Int) -> Int {
    var a = A, b = B
    while b > 0 {
        let tb = b
        b = a % b
        a = tb
    }

    return a
}

let ip = { Int(readLine()!)! }
let N = ip()
var G = [Int]()
var dist = [Int]()
var prev = 0
(0 ..< N).forEach { _ in
    G.append(ip())

    if prev == 0 { prev = G.last! }
    else {
        dist.append(G.last! - prev)
        prev = G.last!
    }
}

var result = 0
let gcd = dist.reduce(into: result) {
    if result == 0 { result = dist.first!; return }
    $0 = getGCD($0, $1)
}

result = 0
print(G.reduce(into: 0) {
    if result == 0 { result = $1; return }
    $0 += ($1 - result) / gcd - 1
    result = $1
})

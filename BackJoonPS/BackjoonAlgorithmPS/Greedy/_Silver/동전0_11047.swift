
// MARK: - 동전0 11047

// MARK: Greedy swift 문제풀이

let ip = { readLine()! }
let arr = ip().split(separator: " ").map { Int(String($0))! }
var G = [Int]()
var result = 0
var rem = arr[1]

(0 ..< arr[0]).forEach { _ in
    G.append(Int(ip())!)
}

for num in G.reversed() {
    result += rem / num
    rem %= num
    if rem == 0 { break }
}

print(result)


// MARK: - 이항계수1
// MARK: math swift 문제풀이

/*
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], K = arr[1]
var V = [Int](repeating: 1, count: 11)

for i in 1...10 {
  V[i] = V[i-1] * i
}

print(V[N] / (V[N-K] * V[K]))
*/

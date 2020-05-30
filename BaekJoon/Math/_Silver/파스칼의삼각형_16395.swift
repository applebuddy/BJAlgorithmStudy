
// MARK: - 파스칼의 삼각형 16395
// MARK: math swift 문제풀이

/*
let Len = 31
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], K = arr[1]
var G = [[Int]](repeating: [Int](repeating: 1, count: Len), count: Len)
G[1][1] = 1

for n in 1...N {
  for k in 1...n {
    G[n][k] = G[n-1][k-1] + G[n-1][k]
  }
}

print(N==1 ? 1 : G[N-2][K-1])
*/

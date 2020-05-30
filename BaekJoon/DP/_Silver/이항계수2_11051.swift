
// MARK: - 이항계수2 11051
// MARK: DP swift 문제풀이

/*
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], K = arr[1]
var DP = [[Int]](repeating: [Int](repeating: 0, count: 1001), count: 1001)

func DFS(_ n: Int, _ k: Int) -> Int {
  if DP[n][k] > 0 { return DP[n][k] }
  if k == 0 || n == k { return 1 }
  DP[n][k] = (DFS(n-1, k) + DFS(n-1, k-1)) % 10007
  return DP[n][k]
}

print(DFS(N, K))
*/


// MARK: - 내리막기 1520
// MARK: swift DP 문제풀이

/*
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], M = arr[1]
var G = [[Int]](repeating: [Int](), count: N+1)

for i in 1...N {
  G[i] = [0] + readLine()!.split(separator: " ").map { Int($0)! }
}

var DP = [[Int]](repeating: [Int](repeating: -1, count: M+1), count: N+1)

let dx = [1, 0, -1, 0]
let dy = [0, 1, 0, -1]

func DFS(_ X: Int, _ Y: Int) -> Int {
  if X == N && Y == M { return 1 }
  if DP[X][Y] > 0 { return DP[X][Y] }
  if DP[X][Y] == -1 {
  DP[X][Y] = 0
  for i in dx.indices {
      let nx = X + dx[i]
      let ny = Y + dy[i]
      if nx < 1 || ny < 1 || nx > N || ny > M { continue }
      if G[nx][ny] >= G[X][Y] { continue }
      DP[X][Y] += DFS(nx, ny)
    }
  }
  return DP[X][Y]
}

print(DFS(1, 1))
*/

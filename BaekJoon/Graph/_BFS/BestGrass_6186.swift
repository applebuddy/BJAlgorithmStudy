
// MARK: - Best Grass
// MARK: BFS swift 문제풀이

/*
typealias Pair = (Int, Int)
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], M = arr[1]
let dx = [0, 0, -1, 1]
let dy = [-1, 1, 0, 0]
var Ans = 0

var G = [[Int]]()
for _ in 0..<N {
  G.append(Array(readLine()!).map { String($0) == "#" ? 0 : 1 })
}

func BFS(_ X: Int, _ Y: Int) {
  if G[X][Y] == 1 { return }
  G[X][Y] = 1
  var Q: [Pair] = [(X,Y)]
  var cur = 0
  Ans += 1
  while cur < Q.count {
    let x = Q[cur].0
    let y = Q[cur].1
    cur += 1
    for i in dx.indices {
      let nx = x + dx[i]
      let ny = y + dy[i]
      if nx < 0 || ny < 0 || nx >= N || ny >= M { continue }
      if G[nx][ny] == 1 { continue }
      G[nx][ny] = 1
      Q.append((nx,ny))
    }
  }
}

for i in G.indices {
  for j in G[i].indices {
    BFS(i,j)
  }
}

print(Ans)
*/

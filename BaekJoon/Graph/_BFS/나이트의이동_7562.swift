
// MARK: - 나이트의 이동 7562
// MARK: BFS swift 문제풀이

/*
typealias Pair = (Int, Int)
let T = Int(readLine()!)!
var Q = [Pair]()
let tx = [-2, -2, 2, 2, -1, 1, -1, 1]
let ty = [-1, 1, -1, 1, 2, 2, -2, -2]

func BFS(_ G: inout [[Int]],_ x: Int,_ y: Int) -> Int {
  var cur = 0
  let len = G.count
  while cur < Q.count {
    let now = Q[cur]
    let nx = now.0
    let ny = now.1
    cur += 1
    for i in tx.indices {
      let dx = nx + tx[i]
      let dy = ny + ty[i]
      if dx < 0 || dy < 0 || dx >= len || dy >= len { continue }
      if G[dx][dy] != 0 { continue }
      G[dx][dy] = G[nx][ny] + 1
      if dx == x && dy == y { break }
      Q.append((dx, dy))
    }
    if G[x][y] > 0 { break }
  }
  return G[x][y] - 1
}

for _ in 0..<T {
  let W = Int(readLine()!)!
  Q = []
  var G = [[Int]](repeating: [Int](repeating: 0, count: W), count: W)

  let arr = readLine()!.split(separator: " ").map { Int($0)! }
  let arr2 = readLine()!.split(separator: " ").map { Int($0)! }
  let x = arr[0], y = arr[1]
  let gx = arr2[0], gy = arr2[1]

  Q.append((x,y))
  G[x][y] = 1

  print(BFS(&G, gx, gy))
}
*/

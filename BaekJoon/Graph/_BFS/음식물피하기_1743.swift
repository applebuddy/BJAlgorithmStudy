
// MARK: - 음식물피하기 1743
// MARK: BFS swift 문제풀이

/*
typealias Pair = (Int, Int)
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let R = arr[0], C = arr[1], K = arr[2]
var G = [[Bool]](repeating: [Bool](repeating: false, count: C), count: R)
let tx = [0, 0, -1, 1]
let ty = [-1, 1, 0, 0]
var Ans = 0
var k = K

for _ in 0..<K {
  let pos = readLine()!.split(separator: " ").map { Int($0)! }
  G[pos[0]-1][pos[1]-1] = true
}

func BFS(_ i: Int, _ j: Int) -> Int {
  var cnt = 1
  G[i][j] = false
  var cur = 0
  var Q = [Pair]()
  Q.append((i, j))
  while cur < Q.count {
    let x = Q[cur].0
    let y = Q[cur].1
    cur += 1
    for i in tx.indices {
      let nx = x + tx[i]
      let ny = y + ty[i]
      if nx < 0 || ny < 0 || nx >= R || ny >= C { continue }
      if !G[nx][ny] { continue }
      G[nx][ny] = false
      cnt += 1
      k -= 1
      if k <= 0 { break }
      Q.append((nx,ny))
    }
  }
  return cnt
}

for i in 0..<R {
  for j in 0..<C {
    if !G[i][j] { continue }
    let nowCnt = BFS(i,j)
    Ans = Ans < nowCnt ? nowCnt : Ans
    if k <= 0 { break }
  }
}

print(Ans)
*/

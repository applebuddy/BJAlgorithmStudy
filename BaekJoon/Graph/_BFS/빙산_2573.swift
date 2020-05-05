
// MARK: - 빙산 2573
// MARK: BFS swift 문제풀이

/*
import Foundation

typealias Pair = (Int, Int)
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], M = arr[1]
let dx = [0, 0, -1, 1]
let dy = [-1, 1, 0, 0]

var G = [[Int]](repeating: [Int](), count: N)
var C = [[Int]](repeating: [Int](repeating: 0, count: M), count: N)
var tC = C
var tG = G

for i in 0..<N {
  G[i] = readLine()!.split(separator: " ").map { Int($0)! }
}

func melt() {
  tG = G
  for i in G.indices {
    for j in G[i].indices {
      if tG[i][j] == 0 { continue }
      for k in dx.indices {
        let nx = i + dx[k]
        let ny = j + dy[k]
        if nx < 0 || ny < 0 || nx >= N || ny >= M { continue }
        if G[nx][ny] == 0 { tG[i][j] -= 1 }
        if tG[i][j] == 0 { break }
      }
    }
  }
  G = tG
}

func BFS(_ X: Int, _ Y: Int) {
  var cur = 0
  var Q = [Pair]()
  Q.append((X,Y))
  tC[X][Y] = 1

  while cur < Q.count {
    let ox = Q[cur].0
    let oy = Q[cur].1
    cur += 1
    for i in dx.indices {
      let nx = ox + dx[i]
      let ny = oy + dy[i]
      if nx < 0 || ny < 0 || nx >= N || ny >= M { continue }
      if tG[nx][ny] == 0 || tC[nx][ny] == 1 { continue }
      tC[nx][ny] = 1
      Q.append((nx,ny))
    }
  }
}

var melCnt = 0
var cnt = 0

if melCnt == N*M { print(0); exit(0) }

var time = 0
while true {
  melt()
  time += 1
  melCnt = 0
  cnt = 0
  tG = G
  tC = C
  for i in 0..<N {
    for j in 0..<M {
      if tG[i][j] == 0 { melCnt += 1; continue }
      if tC[i][j] == 1 { continue }
      BFS(i,j)
      cnt += 1
      if cnt > 1 { break }
    }
  }

  if cnt > 1 { break }
  if melCnt == N*M { print(0); exit(0) }
}

print(time)
*/

// 5 7
// 0 0 0 0 0 0 0
// 0 0 0 0 0 0 0
// 0 0 0 0 5 2 0
// 0 0 0 0 0 0 0
// 0 0 0 0 0 0 0


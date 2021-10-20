
// MARK: - 토마토 7569
// MARK: BFS swift 문제풀이

/*
typealias TP = (Int, Int, Int, Int)
let arr = readLine()!.split(separator: " ").map { Int($0)! }
var rCnt = 0
var Ans = 0

let M = arr[0], N = arr[1], H = arr[2]
let dx = [0, 0, 0, 0, -1, 1]
let dy = [0, 0, -1, 1, 0, 0]
let dz = [-1, 1, 0, 0, 0, 0]


var G = [[[String]]]()
var Q = [TP]()

for _ in 0..<H {
  var tG = [[String]]()
  for _ in 0..<N {
    tG.append(readLine()!.split(separator: " ").map { String($0) })
  }
  G.append(tG)
}

for i in G.indices {
  for j in G[i].indices {
    for k in G[i][j].indices {
      if G[i][j][k] == "1" {
        Q.append((i,j,k,0))
      } else if G[i][j][k] == "0" {
        rCnt += 1
      }
    }
  }
}

func BFS() {
  var cur = 0
  while cur < Q.count {
    let x = Q[cur].0
    let y = Q[cur].1
    let z = Q[cur].2
    let time = Q[cur].3
    cur += 1

    for i in dx.indices {
      let nx = x + dx[i]
      let ny = y + dy[i]
      let nz = z + dz[i]
      if nx < 0 || ny < 0 || nz < 0 || nx >= H || ny >= N || nz >= M { continue }
      if G[nx][ny][nz] != "0" { continue }
      G[nx][ny][nz] = "1"
      Ans = Ans < time+1 ? time+1 : Ans
      rCnt -= 1
      if rCnt == 0 { break }
      Q.append((nx,ny,nz,time+1))
    }
  }
}

BFS()
print(rCnt == 0 ? Ans : -1)
*/

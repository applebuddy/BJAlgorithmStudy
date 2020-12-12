
let ip2 = { readLine()!.split(separator: " ").map { String($0) }}
let arr = readLine()!.split(separator: " ").map { Int(String($0))! }
let N = arr[0], M = arr[1]
var G = [[String]]()
var C = [[Bool]](repeating: [Bool](repeating: false, count: M), count: N)
var cnt = 0
var big = 0

(0..<N).forEach { _ in
  G.append(ip2())
}

let dx = [0, 0, 1, -1]
let dy = [-1, 1, 0, 0]
func BFS(_ x: Int, _ y: Int) {
  var tCnt = 0
  var Q: [(Int, Int)] = [(x, y)]
  var cur = 0
  tCnt += 1
  big = big < tCnt ? tCnt : big
  while cur < Q.count {
    let node = Q[cur]
    cur += 1
    for tdx in dx.indices {
      let nx = node.0 + dx[tdx]
      let ny = node.1 + dy[tdx]
      if nx < 0 || nx >= N || ny < 0 || ny >= M { continue }
      if G[nx][ny] != "1" || C[nx][ny] { continue }
      C[nx][ny] = true
      tCnt += 1
      big = big < tCnt ? tCnt : big
      Q.append((nx, ny))
    }
  }
}

for idx in 0..<N {
  for jdx in 0..<M {
    if C[idx][jdx] || G[idx][jdx] != "1" { continue }
    cnt += 1
    C[idx][jdx] = true
    BFS(idx, jdx)
  }
}

print(cnt, big, separator: "\n")

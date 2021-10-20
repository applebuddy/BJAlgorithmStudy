
// MARK: - 판화 1730
// MARK: Implementation swift 문제풀이

/*
typealias Pair = (Bool, Bool)

let N = Int(readLine()!)!
let C = Array(readLine()!).map { String($0) }
var G = [[Pair]](repeating: [Pair](repeating: (false, false), count: N), count: N)
var pos = (0, 0)

for i in C.indices {
  let x = pos.0, y = pos.1
  var nx = x, ny = y
  if C[i] == "D" {
    nx += 1
    if nx >= N { continue }
    G[x][y].1 = true
    pos = (nx, y)
    G[nx][y].1 = true
  } else if C[i] == "U" {
    nx -= 1
    if nx < 0 { continue }
    G[x][y].1 = true
    pos = (nx, y)
    G[nx][y].1 = true
  } else if C[i] == "L" {
    ny -= 1
    if ny < 0 { continue }
    G[x][y].0 = true
    pos = (x, ny)
    G[x][ny].0 = true
  } else {
    ny += 1
    if ny >= N { continue }
    G[x][y].0 = true
    pos = (x, ny)
    G[x][ny].0 = true
  }
}

for i in G.indices {
  print(G[i].map {
    if $0.0 && $0.1 { return "+" }
    else if $0.0 && !$0.1 { return "-" }
    else if !$0.0 && $0.1 { return "|" }
    else { return "." }
  }.joined())
}
*/

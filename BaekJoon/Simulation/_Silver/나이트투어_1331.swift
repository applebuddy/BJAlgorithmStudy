
// MARK: - 나이트투어 1331
// MARK: Simulation swift 문제풀이

/*
let pos = [(-2, -1), (-2, 1), (-1, 2), (1, 2), (2, 1), (2, -1), (1, -2), (-1, -2)]
let len = 6
var G = [[Bool]](repeating: [Bool](repeating: false, count: len), count: len)
var X = 0, Y = 0
var fX = 0, fY = 0

var good = true
for i in 0..<36 {
  let now = Array(readLine()!)
  if !good { continue }
  let x = Int(now[0].asciiValue!) - 65
  let y = Int(String(now[1]))! - 1
  if i == 0 {
    X = x
    Y = y
    fX = X
    fY = Y
    G[X][Y] = true
    continue
  }

  if G[x][y] == false {
    var ok = false
    for k in pos.indices {
      let nx = X + pos[k].0
      let ny = Y + pos[k].1
      if nx < 0 || ny < 0 || nx >= len || ny >= len { continue }
      if nx == x && ny == y && G[nx][ny] == false { ok = true; break }
    }
    if ok {
      G[x][y] = true
      X = x
      Y = y
    } else { good = false }
  } else { good = false }
}

if good {
  var ok = false
  for k in pos.indices {
      let nx = X + pos[k].0
      let ny = Y + pos[k].1
      if nx < 0 || ny < 0 || nx >= len || ny >= len { continue }
      if nx == fX && ny == fY { ok = true; break }
    }
  good = ok
}

print(good ? "Valid" : "Invalid")
*/

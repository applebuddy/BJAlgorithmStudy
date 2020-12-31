
// MARK: - 달팽이2 1952
// MARK: simulation swift 문제풀이

/*
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let R = arr[0], C = arr[1]
var G = [[Bool]](repeating: [Bool](repeating: false, count: C), count: R)
var x = 0, y = -1
var Ans = 0
var dir = 0
var cnt = 0
let tx = [0, 1, 0, -1]
let ty = [1, 0, -1, 0]

func turnDir() {
  dir = (dir+1)%4
  Ans += 1
}

while cnt < R*C {
  let nx = x + tx[dir]
  let ny = y + ty[dir]
  if nx < 0 || ny < 0 || nx >= R || ny >= C { turnDir(); continue }
  if G[nx][ny]==true { turnDir(); continue }
  G[nx][ny] = true
  cnt += 1
  x = nx
  y = ny
}

print(Ans)
*/

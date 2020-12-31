
// MARK: - 자리배정 10157
// MARK: implementation swift 문제풀이

/*
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let K = Int(readLine()!)!

let R = arr[0], C = arr[1]
var G = [[Int]](repeating: [Int](repeating: 0, count: C), count: R)

var dir = 0
let tx = [0, 1, 0, -1]
let ty = [1, 0, -1, 0]
var x = 0, y = -1
var cnt = 0
var Ans = (-1, -1)

while cnt < R*C {
  let nx = x + tx[dir]
  let ny = y + ty[dir]
  if nx < 0 || ny < 0 || nx >= R || ny >= C { dir = (dir + 1) % 4; continue }
  if G[nx][ny] != 0 { dir = (dir + 1) % 4; continue }
  cnt += 1
  G[nx][ny] = cnt
  x = nx
  y = ny
  if cnt == K { Ans = (nx, ny); break }
}

print(Ans.0 == -1 ? "0" : "\(Ans.0+1) \(Ans.1+1)")
*/

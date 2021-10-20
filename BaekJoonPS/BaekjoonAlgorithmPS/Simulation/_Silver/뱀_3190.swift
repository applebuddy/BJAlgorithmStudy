
// MARK: - 뱀 3190
// MARK: Simulation swift 문제풀이

/*
import Foundation

typealias PV = [(Int,Int)]
typealias Pair = (Int,Int)

let dx = [0, 1, 0, -1]
let dy = [1, 0, -1, 0]
let N = Int(readLine()!)!
let K = Int(readLine()!)!
var G = [[Int]](repeating: [Int](repeating: 0, count: N), count: N)

class Snake {
  var head: Pair = (0,0)
  var body: PV = []
  private var dir = 0

  init(_ head: Pair, _ dir: Int) {
    self.head = head
    self.body = [head]
    self.dir = dir
  }

  func move() -> Bool {
    let nx = head.0 + dx[dir]
    let ny = head.1 + dy[dir]
    if nx < 0 || ny < 0 || nx >= N || ny >= N { return false }
    self.head = (nx, ny)
    if G[nx][ny] == 3 {
      return false
    } else {
      self.body.append((nx, ny))
      if G[nx][ny] != 1 {
        let bx = body.first!.0
        let by = body.first!.1
        G[bx][by] = 0
        body.removeFirst()
      }
      G[nx][ny] = 3
    }
    return true
  }

  func turn(to: String) {
    dir += to=="D" ? 1 : -1
    if dir == 4 { dir = 0 }
    else if dir < 0 { dir = 3 }
  }
}

for _ in 0..<K {
  let p = readLine()!.split(separator: " ").map { Int($0)! }
  let x = p[0]-1, y = p[1]-1
  G[x][y] = 1
}

let L = Int(readLine()!)!
let Snk = Snake((0,0), 0)
G[0][0] = 3

var time = 0
var TV = [(Int, String)]()

for _ in 0..<L {
  let arr = readLine()!.split(separator: " ")
  let X = Int(arr[0])!, C = String(arr[1])
  TV.append((X,C))
}

let tLen = TV.count
var tdx = 0

while true {
    time += 1
    if !Snk.move() { print(time); exit(0) }
    if tdx < tLen && TV[tdx].0 == time {
      Snk.turn(to: TV[tdx].1)
      tdx += 1
    }
}
*/

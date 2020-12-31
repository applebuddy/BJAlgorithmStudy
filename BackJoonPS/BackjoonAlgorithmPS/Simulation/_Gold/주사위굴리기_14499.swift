
// MARK: - 주사위 굴리기 14499
// MARK: Simulation swift 문제풀이

/*
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], M = arr[1], X = arr[2], Y = arr[3], K = arr[4]

var Dice = [[Int]](repeating: [Int](repeating: 0, count: 3), count: 4)
var G = [[Int]](repeating: [Int](), count: N)
var pos = (X, Y)
var dx = [0, 0, 0, -1, 1]
var dy = [0, 1, -1, 0, 0]

extension Array where Element == [Int] {
  mutating func roll(_ dir: Int) {
    var nx = 0, ny = 0
    let temp = self[1][1]
    nx = pos.0 + dx[dir]
    ny = pos.1 + dy[dir]
    if nx < 0 || ny < 0 || nx >= N || ny >= M { return }
    if dir == 1 {
      self[1][1] = self[1][0]
      self[1][0] = self[3][1]
      self[3][1] = self[1][2]
      self[1][2] = temp
    } else if dir == 2 {
      self[1][1] = self[1][2]
      self[1][2] = self[3][1]
      self[3][1] = self[1][0]
      self[1][0] = temp
    } else if dir == 4 {
      self[1][1] = self[0][1]
      self[0][1] = self[3][1]
      self[3][1] = self[2][1]
      self[2][1] = temp
    } else if dir == 3 {
      self[1][1] = self[2][1]
      self[2][1] = self[3][1]
      self[3][1] = self[0][1]
      self[0][1] = temp
    }
    pos.0 = nx
    pos.1 = ny
    if G[nx][ny] == 0 {
      G[nx][ny] = self[3][1]
    } else {
      self[3][1] = G[nx][ny]
      G[nx][ny] = 0
    }
    print(self[1][1])
  }
}

for i in 0..<N {
  G[i] = readLine()!.split(separator: " ").map { Int($0)! }
}

let V = readLine()!.split(separator: " ").map { Int($0)! }

for i in V.indices { Dice.roll(V[i]) }
*/

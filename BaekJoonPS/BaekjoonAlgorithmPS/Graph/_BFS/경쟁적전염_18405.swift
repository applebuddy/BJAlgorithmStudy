
// MARK: - 경쟁적 전염 18405
// MARK: BFS swift 문제풀이

/*
typealias Fople = (Int, Int, Int, Int)

let tx = [-1, 1, 0, 0]
let ty = [0, 0, -1, 1]
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], K = arr[1]
var G = [[Int]](repeating: [Int](), count: N)
var Q = [Fople]()
var C = [[Fople]](repeating: [Fople](), count: K+1)

for i in 0..<N {
  let arr = readLine()!.split(separator: " ").map { Int($0)! }
  G[i] = arr
}

let arr2 = readLine()!.split(separator: " ").map { Int($0)! }

let S = arr2[0], X = arr2[1]-1, Y = arr2[2]-1
var time = 0

var idx = 1
for i in 0..<N {
  for j in 0..<N {
    if G[i][j] > 0 {
      C[G[i][j]].append((G[i][j],0,i,j))
    }
  }
}

for i in 1...K {
  Q += C[i]
}

var cur = 0
func BFS() -> Int {
  while cur < Q.count {
    let now = Q[cur]
    if now.1 >= S || G[X][Y] > 0 { break }
    cur += 1
    
    for i in 0..<4 {
      let dx = now.2 + tx[i]
      let dy = now.3 + ty[i]
      if dx < 0 || dx >= N || dy < 0 || dy >= N { continue }
      if G[dx][dy] != 0 { continue }
      G[dx][dy] = now.0
      if G[X][Y] > 0 { return G[X][Y] }
      Q.append((now.0, now.1+1, dx, dy))
    }
  }
  return G[X][Y]
}

print(BFS())
*/

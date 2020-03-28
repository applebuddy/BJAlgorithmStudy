
// MARK: - 뒤집기2 1455
// MARK: swift 문제풀이

/*
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], M = arr[1]
var G = [[Int]](repeating: [Int](), count: N)
for i in G.indices {
  G[i] = Array(readLine()!).map { Int(String($0))! }
}

func flipCoin(_ x: Int, _ y: Int) {
  for i in 0...x {
    for j in 0...y {
      G[i][j] = G[i][j] == 1 ? 0 : 1
    }
  }
}

var Ans = 0
for i in G.indices.reversed() {
  for j in G[i].indices.reversed() {
    if G[i][j] == 1 {
      flipCoin(i,j)
      Ans += 1
    }
  }
}

print(Ans)
*/

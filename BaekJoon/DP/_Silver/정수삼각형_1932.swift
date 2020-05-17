
// MARK: - 정수삼각형 1932
// MARK: DP swift 문제풀이

/*
let N = Int(readLine()!)!
var G = [[Int]]()

for _ in 0..<N {
  G.append(readLine()!.split(separator: " ").map { Int($0)! })
}

let len = G.count

for i in 1..<len {
  for j in G[i].indices {
    if j == 0 { G[i][j] += G[i-1][j] }
    else if j == G[i].count-1 { G[i][j] += G[i-1][G[i-1].count-1] }
    else {
      G[i][j] += max(G[i-1][j-1], G[i-1][j])
    }
  }
}

print(G[len-1].max()!)
*/

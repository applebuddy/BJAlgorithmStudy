
// MARK: - 내려가기 2096
// MARK: DP swift 문제풀이

/*
let N = Int(readLine()!)!
var G = [[Int]]()

for _ in 0..<N {
  G.append(readLine()!.split(separator: " ").map { Int($0)! })
}

var DP = G
var DP2 = G

for i in G.indices {
  if i == 0 { continue }
  for j in G[i].indices {
    if j == 0 {
      DP[i][j] += max(DP[i-1][j], DP[i-1][j+1])
      DP2[i][j] += min(DP2[i-1][j], DP2[i-1][j+1])
    } else if j == 1 {
      DP[i][j] += max(DP[i-1][j-1], max(DP[i-1][j], DP[i-1][j+1]))
      DP2[i][j] += min(DP2[i-1][j-1], min(DP2[i-1][j], DP2[i-1][j+1]))
    } else {
      DP[i][j] += max(DP[i-1][j-1], DP[i-1][j])
      DP2[i][j] += min(DP2[i-1][j-1], DP2[i-1][j])
    }
  }
}

print(DP.last!.max()!, DP2.last!.min()!, separator: " ")
*/

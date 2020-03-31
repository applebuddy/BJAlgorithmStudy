
// MARK: - 퇴사 14501
// MARK: DFS swift 문제풀이 (DP로도 풀어볼 필요 있음)

/*
let T = Int(readLine()!)!
var G = [[Int]]()
var Ans = 0, len = 0

func DFS(_ start: Int, _ profit: Int) {
  Ans = profit > Ans ? profit : Ans
  if start > len { return }
  for i in start..<len {
    if G[i][0] + i > len { continue }
    DFS(i + G[i][0], profit + G[i][1])
  }
}

for _ in 0..<T {
  G.append(readLine()!.split(separator: " ").map { Int($0)! })
}

len = G.count
DFS(0, 0)

print(Ans)
*/

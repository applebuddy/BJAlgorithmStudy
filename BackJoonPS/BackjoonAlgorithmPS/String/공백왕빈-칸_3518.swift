
// MARK: - 공백왕 빈-칸 3518
// MARK: string swift 문제풀이

/*
var G = [[String]]()
var Ans = [[String]](repeating: [String](), count: 1001)
var LV = [[Int]](repeating: [Int](repeating: 0, count: 1001), count: 1001)
var MV = [Int](repeating: 0, count: 101)

var idx = 0
while let S = readLine() {
  G.append(S.split(separator: " ").map { String($0) })
}

for i in G.indices {
  for j in G[i].indices {
    LV[i][j] = Array(G[i][j]).count
    MV[j] = LV[i][j] > MV[j] ? LV[i][j] : MV[j]
  }
}

for i in G.indices {
  for j in G[i].indices {
    Ans[i].append(G[i][j])
    if j == G[i].count - 1 { break }
    let diff = MV[j] - LV[i][j]
    Ans[i].append(" ")
    if diff <= 0 { continue }
    let nowStr = [String](repeating: " ", count: MV[j] - LV[i][j]).joined()
    Ans[i].append(nowStr)
  }
}

for i in G.indices {
  print(Ans[i].joined())
}
*/

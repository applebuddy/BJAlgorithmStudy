
// MARK: - 지뢰찾기 1996
// MARK: Implementation swift 문제풀이

/*
typealias PV = [(Int,Int)]
let N = Int(readLine()!)!
var G = [[Int]](repeating: [Int](), count: N)
let pos: PV = [(-1,-1), (-1,0), (-1,1), (0,-1), (0,1), (1,-1), (1,0), (1,1)]

for i in 0..<N {
  G[i] = Array(readLine()!).map { $0=="." ? 0 : Int(String($0))! }
}

var Ans = [[String]](repeating: [String](repeating: "", count: N), count: N)

for i in G.indices {
  for j in G[i].indices {
    if G[i][j] == 0 {
      var tot = 0
      for k in pos.indices {
        let nx = i + pos[k].0
        let ny = j + pos[k].1
        if nx < 0 || ny < 0 || nx >= N || ny >= N { continue }
        tot += G[nx][ny]
      }
      Ans[i][j] = tot < 10 ? "\(tot)" : "M"
    } else { Ans[i][j] = "*" }
  }
}

for i in Ans.indices {
  print(Ans[i].joined())
}
*/


// MARK: - 지뢰찾기 4108
// MARK: Implementation swift 문제풀이

/*
let pos = [(-1,0), (-1,1), (0,1), (1,1), (1,0), (1,-1), (0,-1), (-1,-1)]
while true {
  let arr = readLine()!.split(separator: " ").map { Int($0)! }
  let N = arr[0], M = arr[1]
  if N == 0 && M == 0 { break }
  var G = [[String]](repeating: [String](repeating: " ", count: M), count: N)
  var Ans = G
  for i in G.indices {
    G[i] = Array(readLine()!).map { String($0) }
  }

  for i in G.indices {
    for j in G[i].indices {
      var cnt = 0
      if G[i][j] == "*" { Ans[i][j] = G[i][j]; continue }
      for k in pos.indices {
        let nx = i + pos[k].0
        let ny = j + pos[k].1
        if nx < 0 || ny < 0 || nx >= N || ny >= M { continue }
        if G[nx][ny] == "*" { cnt += 1 }
      }
      Ans[i][j] = "\(cnt)"
    }
  }

  for i in Ans.indices {
    print(Ans[i].joined())
  }
}
*/

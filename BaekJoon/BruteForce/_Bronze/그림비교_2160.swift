
// MARK: - 그림비교 2160
// MARK: BruteForce swift 문제풀이

/*
let T = Int(readLine()!)!

var GV = [[[String]]]()
for _ in 0..<T {
  var G = [[String]](repeating: [String](), count: 5)
  for i in 0..<5 {
    G[i] = Array(readLine()!).map { String($0) }
  }
  GV.append(G)
}

let len = GV.count

var Ans: (Int, Int) = (0, 0)
var mx = 0
for i in 0..<len-1 {
  for j in i+1..<len {
    var same = 0
    for a in GV[i].indices {
      for b in GV[i][a].indices {
        if GV[i][a][b] == GV[j][a][b] {
          same += 1
        }
      }
    }
    if mx < same {
      mx = same
      Ans = (i, j)
    }
  }
}

print(Ans.0+1, Ans.1+1, separator: " ")
*/

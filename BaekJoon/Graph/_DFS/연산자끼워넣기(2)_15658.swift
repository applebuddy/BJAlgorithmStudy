
// MARK: - 연산자 끼워넣기(2)
// MARK: DFS swift 문제풀이

/*
typealias Tuple = (Int, Int, Int, Int)
let N = Int(readLine()!)!
let G = readLine()!.split(separator: " ").map { Int($0)! }
let len = G.count
var MX = -Int.max, MN = Int.max
let K = readLine()!.split(separator: " ").map { Int($0)! }

var TP: Tuple = (0, 0, 0, 0)

func DFS(_ idx: Int, _ sum: Int) {
  if idx >= len {
    MX = MX < sum ? sum : MX
    MN = MN > sum ? sum : MN
    return
  }

  if TP.0 < K[0] {
    TP.0 += 1
    DFS(idx+1, sum+G[idx])
    TP.0 -= 1
  }

  if TP.1 < K[1] {
    TP.1 += 1
    DFS(idx+1, sum-G[idx])
    TP.1 -= 1
  }

  if TP.2 < K[2] {
    TP.2 += 1
    DFS(idx+1, sum*G[idx])
    TP.2 -= 1
  }

  if TP.3 < K[3] {
    TP.3 += 1
    DFS(idx+1, sum/G[idx])
    TP.3 -= 1
  }
}

DFS(1, G[0])
print(MX, MN, separator: "\n")
*/

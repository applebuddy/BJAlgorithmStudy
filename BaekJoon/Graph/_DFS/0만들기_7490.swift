
// MARK: - 0만들기 7490
// MARK: DFS swift 문제풀이

/*
let T = Int(readLine()!)!
var G = [Int]()
var S = [String]()
var N = 3

func DFS(_ idx: Int, _ sum: Int, _ prev: Int, _ pv: Int) {
  if idx >= N {
    if sum == 0 { print(S.joined()) }
    return
  }

  let tmp = S
  S += [" "] + ["\(G[idx])"]
  var tSum = sum
  var pVal = 0
  if prev == 1 {
    tSum -= pv
    pVal = pv * 10 + G[idx]
    tSum += pVal
    DFS(idx+1, tSum, prev, pVal)
  } else {
    tSum += pv
    pVal = pv * 10 + G[idx]
    tSum -= pVal
    DFS(idx+1, tSum, prev, pVal)
  }

  S = tmp
  S += ["+"] + ["\(G[idx])"]
  DFS(idx+1, sum+G[idx], 1, G[idx])
  S = tmp
  S += ["-"] + ["\(G[idx])"]
  DFS(idx+1, sum-G[idx], 0, G[idx])
  S = tmp
}

for _ in 0..<T {
  N = Int(readLine()!)!
  G = [Int](1...N)
  S = ["1"]
  DFS(1, 1, 1, 1)
  print()
}
*/

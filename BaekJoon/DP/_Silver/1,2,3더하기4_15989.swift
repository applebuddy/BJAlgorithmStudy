
// MARK: - 1,2,3더하기4 15989
// MARK: DP swift 문제풀이

/*
let T = Int(readLine()!)!
var DP = [[Int]](repeating: [Int](repeating: 0, count: 5), count: 10001)

for i in 1...3 {
  for j in 1...i {
    DP[i][j] = 1
  }
}

for _ in 0..<T {
  let N = Int(readLine()!)!
  if N < 4 {
    print(DP[N][1] + DP[N][2] + DP[N][3])
    continue;
  }

  for i in 4...N {
    DP[i][1] = DP[i-1][1]
    DP[i][2] = DP[i-2][1] + DP[i-2][2]
    DP[i][3] = DP[i-3][1] + DP[i-3][2] + DP[i-3][3]
  }
  print(DP[N][1] + DP[N][2] + DP[N][3])
}
*/

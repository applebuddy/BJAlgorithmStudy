
// MARK: - 1,2,3 더하기 3 15988
// MARK: DP swift 문제풀이

/*
let T = Int(readLine()!)!
let MX = 1000000
let rem = Int(1e9)+9
var DP = [Int](repeating: 0, count: MX+1)
DP[0...3] = [1, 1, 2, 4]
for i in 4...MX {
  DP[i] = (DP[i-1] + DP[i-2] + DP[i-3]) % rem
}

for _ in 0..<T {
  let N = Int(readLine()!)!
  print(DP[N])
}
*/


// MARK: - 제곱수의 합 1699
// MARK: DP swift 문제풀이

/*
import Foundation

let N = Int(readLine()!)!
if N == 1 { print(1); exit(0) }
var DP = [Int](repeating: 0, count: N+1)

for i in 1...N { DP[i] = i }
for i in 2...N {
  var j = 1
  while j*j <= i {
    let cmp = DP[i-j*j] + 1
    DP[i] = DP[i] > cmp ? cmp : DP[i]
    j += 1
  }
}

print(DP[N])
*/

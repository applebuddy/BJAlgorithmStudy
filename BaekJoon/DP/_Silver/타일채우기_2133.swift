
// MARK: - 타일채우기 2133
// MARK: DP swift 문제풀이

/*
let N = Int(readLine()!)!
var DP = [Int](repeating: 0, count: N+1)

if N & 1 == 1 {
  print(0)
} else {
  DP[2] = 3
  var i = 4
  while i <= N {
    var j = 4
    while j <= i {
      DP[i] += DP[i-j] * 2
      j += 2
    }
    DP[i] += (DP[i-2] * DP[2] + 2)
    i += 2
  }
  print(DP[N])
}
*/


// MARK: - 신기한수 17618
// MARK: Implementation swift 문제풀이

/*
import Foundation

let N = Int(readLine()!)!
var cnt = 9

if N <= 9 { print(N); exit(0) }
for i in 10...N {
  var n = i
  var sum = 0
  while n > 0 {
    sum += n % 10
    n /= 10
  }
  if i % sum == 0 { cnt += 1 }
}

print(cnt)
*/


// MARK: - 자기복제수 2028
// MARK: swift 문제풀이

/*
let T = Int(readLine()!)!

for _ in 0..<T {
  var N = Int(readLine()!)!
  var NN = N * N
  var good = true
  while N > 0 {
    if N % 10 != NN % 10 { good = false; break }
    N /= 10
    NN /= 10
  }

  print(good ? "YES" : "NO")
}
*/

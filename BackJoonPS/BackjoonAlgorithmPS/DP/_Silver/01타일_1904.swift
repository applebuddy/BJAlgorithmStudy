
// MARK: - 01타일 1904
// MARK: DP swift 문제풀이

/*
let N = Int(readLine()!)!
var pprev = 2, prev = 3

if N <= 1 { print(1) }
else if N == 2 { print(2) }
else if N == 3 { print(3) }
else {
  var Ans = 5
  for _ in 4...N {
    Ans = (pprev + prev) % 15746
    pprev = prev
    prev = Ans
  }
  print(Ans % 15746)
}
*/

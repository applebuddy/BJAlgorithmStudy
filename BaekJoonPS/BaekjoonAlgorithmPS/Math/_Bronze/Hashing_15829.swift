
// MARK: - Hashing 15829
// MARK: swift 문제풀이

/*
let N = Int(readLine()!)!
let S = Array(readLine()!)

func npow(_ N: Int, _ K: Int) -> Int {
  var result = 1
  var val = N
  var k = K
  while k > 0 {
    if k % 2 == 0 {
      val *= val % 1234567891
      k /= 2
    } else {
      result *= val % 1234567891
      k -= 1
    }
    result %= 1234567891
    val %= 1234567891
  }
  return result % 1234567891
}

var Ans = 0
for i in S.indices {
  let ascii = Int(S[i].asciiValue! - 96)
  Ans += ascii * (npow(31, i) % 1234567891)
  Ans %= 1234567891
}

print(Ans)
*/

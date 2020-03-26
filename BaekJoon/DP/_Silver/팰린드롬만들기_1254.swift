
// MARK - 팰린드롬만들기 1254
// MARK: DP swift 문제풀이

/*
let S = Array(readLine()!).map { String($0) }

var A: [String] = ["@"]
for i in S.indices {
  A.append(S[i])
  A.append("@")
}
var center = 0
let len = A.count
var result = 0
func manachers() -> Int {
  var r = 0, p = 0
  var D = [Int](repeating: 0, count: len)
  for i in A.indices {
    if i <= r { D[i] = min(r - i, D[2 * p - i]) }
    else { D[i] = 0 }

    while i-D[i]-1 >= 0 && i+D[i]+1 < len && A[i-D[i]-1] == A[i+D[i]+1] {
      D[i] += 1
    }

    if r <= i + D[i] {
      r = i + D[i]
      p = i
    }
  }

  for i in D.indices {
    if i + D[i] == A.count-1 { result = D[i]; break }
  }
  return result
}

let com = manachers()
print(S.count-com+S.count)
*/

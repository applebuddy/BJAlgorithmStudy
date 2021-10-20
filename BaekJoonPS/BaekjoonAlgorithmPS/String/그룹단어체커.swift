
// MARK: - 그룹단어체커 1316
// MARK: string swift 문제풀이

/*
let T = Int(readLine()!)!
var Ans = 0

for _ in 0..<T {
  let S = Array(readLine()!)
  let len = S.count
  var good = true
  var C = [Bool](repeating: false, count: 26)

  if len == 1 { Ans += 1; continue }
  C[Int(S[0].asciiValue!) - 97] = true
  for i in 1..<len {
    let ascii = Int(S[i].asciiValue!) - 97
    if S[i] == S[i-1] { continue }
    else if C[ascii] { good = false; break }
    C[ascii] = true
  }

  if good { Ans += 1 }
}

print(Ans)
*/

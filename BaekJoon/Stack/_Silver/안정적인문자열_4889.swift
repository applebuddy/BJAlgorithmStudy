
// MARK: - 안정적인 문자열 4889
// MARK: stack swift 문제풀이

/*
var CNT = 1
while true {
  let S = Array(readLine()!).map { String($0) }
  if S.count > 0 && S.first! == "-" { break }
  var cnt = 0
  var Ans = 0
  for i in S.indices {
    if S[i] == "{" { cnt += 1 }
    else {
      if cnt == 0 {
        cnt += 1
        Ans += 1
      } else {
        cnt -= 1
      }
    }
  }
  print("\(CNT). \(Ans+cnt/2)")
  CNT += 1
}
*/

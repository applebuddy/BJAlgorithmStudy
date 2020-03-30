
// MARK: - 문자인식 3448
// MARK: Implementation swift 문제풀이

/*
let T = Int(readLine()!)!
for _ in 0..<T {
  var R = 0.0, A = 0.0
  while let S = readLine() {
    if S == "" { break }
    R += Double(Array(S).filter { $0 != "#" }.count)
    A += Double(Array(S).count)
  }

  let ratio = ((R/A * 10.0) * 100.0).rounded() / 10.0
  if Double(Int(ratio * 10) / 10) == ratio {
    print("Efficiency ratio is \(Int(ratio))%.")
  } else { print("Efficiency ratio is \(ratio)%.") }
}
*/

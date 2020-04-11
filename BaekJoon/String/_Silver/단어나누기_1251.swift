
// MARK: - 단어나누기 1251
// MARK: String swift 문제풀이

/*
let S = Array(readLine()!)

let len = S.count
var Ans = "-"
for i in 0..<len-2 {
  for j in i+1..<len-1 {
      let first = Array(S[0...i].reversed())
      let second = Array(S[i+1...j].reversed())
      let third = Array(S[j+1..<len].reversed())
      let comp = (first + second + third).map { String($0) }.joined()
      if Ans == "-" || Ans > comp {
        Ans = comp
      }
  }
}

print(Ans)
*/

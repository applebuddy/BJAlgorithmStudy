
// MARK: - 소수 부분 문자열 5636
// MARK: String swift 문제풀이

/*
let MAX = 100000
var P = [Bool](repeating: true, count: MAX+1)
for i in 0...1 { P[i] = false }

var i = 2, j = i + i
while i*i <= MAX {
  if P[i]==true {
    j = i+i
    while j <= MAX {
      P[j] = false
      j += i
    }
  }
  i += 1
}

while true {
  let S = Array(readLine()!).map { String($0) }

  if S.first! == "0" && S.count == 1 {
    break
  }

  let arr = S
  let len = arr.count
  var Ans = 0
  for i in 0..<len {
    for j in i..<len {
      let val = Int(arr[i...j].joined())!
      if val > 100000 { break }
      if P[val] == true {
        Ans = Ans < val ? val : Ans
      }
    }
  }

  print(Ans)
}
*/

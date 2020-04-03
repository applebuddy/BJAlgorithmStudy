
// MARK: - 암호해독기 17176
// MARK: String swift 문제풀이

/*
let N = Int(readLine()!)!
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let S = Array(readLine()!)
var dic = [Int](repeating: 0, count: 53)
for i in arr.indices {
  dic[arr[i]] += 1
}

var good = true
for i in S.indices {
  let ascii = Int(S[i].unicodeScalars.first!.value)
  var value = 0
  if ascii == 48 { value = 0 }
  else if ascii >= 65 && ascii <= 90 {
    value = ascii - 64
  } else if ascii >= 97 && ascii <= 122 {
    value = ascii - 70
  }

  if dic[value] == 0 { good = false; break }
  dic[value] -= 1
}

print(good ? "y" : "n")
*/

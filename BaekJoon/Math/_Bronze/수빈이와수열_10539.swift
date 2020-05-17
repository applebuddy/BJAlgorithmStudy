
// MARK: - 수빈이와 수열 10539
// MARK: math swift 문제풀이

/*
let Len = Int(readLine()!)!
let arr = readLine()!.split(separator: " ").map { Int($0)! }
var Ans = [Int](repeating: 0, count: Len)
Ans[0] = arr[0]
for i in 1..<Len {
  var sum = 0
  for j in 0...i { sum += Ans[j] }
  Ans[i] = arr[i] * (i+1) - sum
}

print(Ans.map { String($0) }.joined(separator: " "))
*/

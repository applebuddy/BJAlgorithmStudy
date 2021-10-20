
// MARK: - 피보나치수의개수 6571
// MARK: Implementation swift 문제풀이

/*
import Foundation

let MAX = 101

func sumArr(_ A: inout [Int], _ B: inout [Int]) -> [Int] {
  var result = [Int](repeating: 0, count: MAX)
  var rem = 0
  var idx = MAX - 1
  
  while idx >= 0 {
    result[idx] = (A[idx] + B[idx] + rem) % 10
    rem = (A[idx] + B[idx] + rem) / 10
    idx -= 1
  }
  return result
}

func compArr(_ A: inout [Int], _ B: inout [Int]) -> Bool {
  var idx = 0
  while idx < MAX {
    if A[idx] > B[idx] { return true }
    else if A[idx] < B[idx] { return false }
    idx += 1
  }
  return true
}

while true {
  let arr = readLine()!.split(separator: " ")
  var Ans = 0
  if arr[0] == "0" && arr[0] == arr[1] { exit(0) }
  let _A = Array(arr[0]).map { Int(String($0))! }
  let al = _A.count
  let _B = Array(arr[1]).map { Int(String($0))! }
  let bl = _B.count
  var A = [Int](repeating: 0, count: MAX - al) + _A
  var B = [Int](repeating: 0, count: MAX - bl) + _B

  var prev = [Int](repeating: 0, count: MAX)
  prev[MAX-1] = 1
  var pprev = prev
  pprev[MAX-1] = 0
  while true {
    var now = sumArr(&prev, &pprev)
    if compArr(&now, &B) && now != B { break }
    if compArr(&now, &A) || now == A {
      Ans += 1
    }
    pprev = prev
    prev = now
  }
  print(Ans)
}
*/

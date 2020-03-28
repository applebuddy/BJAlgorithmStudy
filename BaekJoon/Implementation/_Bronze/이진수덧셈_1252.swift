
// MARK: - 이진수 덧셈 1252
// MARK: swift 문제풀이

/*
let arr = readLine()!.split(separator: " ").map { Array($0).map { Int(String($0))! } }
let al = arr[0].count, bl = arr[1].count
let len = al > bl ? al+2 : bl+2
var A = [Int](repeating: 0, count: len-al) + arr[0]
var B = [Int](repeating: 0, count: len-bl) + arr[1]
var C = [Int](repeating: 0, count: len)

var idx = len - 1
var rem = 0
while idx >= 0 {
  C[idx] = (A[idx] + B[idx] + rem) % 2
  rem = (A[idx] + B[idx] + rem) / 2
  idx -= 1
}

while C.count > 1 && C.first! == 0 {
  C.removeFirst()
}

print(C.map { String($0) }.joined())
*/


// MARK: - 이진수 덧셈 2729
// MARK: Implementation swift 문제풀이

/*

let T = Int(readLine()!)!
for _ in 0..<T {
  let arr = readLine()!.split(separator: " ")
  let first = Array(arr[0]).map { Int(String($0))! }
  let second = Array(arr[1]).map { Int(String($0))! }
  let fl = first.count, sl = second.count
  let len = fl > sl ? fl+1 : sl+1
  var sum = [Int](repeating: 0, count: fl > sl ? fl+1 : sl+1)
  var A = sum, B = sum
  A[len-fl..<len] = first[0..<fl]
  B[len-sl..<len] = second[0..<sl]
  
  var idx = len - 1
  var rem = 0
  while idx >= 0 {
      sum[idx] = (A[idx] + B[idx] + rem) % 2
      rem = (A[idx] + B[idx] + rem) / 2
      idx -= 1
  }

  var result = sum.map { String($0) }
  while result != ["0"] && result.first! == "0" {
      result.removeFirst()
  }

  print(result.joined())
}

*/

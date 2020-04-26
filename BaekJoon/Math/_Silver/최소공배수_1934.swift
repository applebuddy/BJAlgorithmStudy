
// MARK: - 최소공배수 1934
// MARK: math swift 문제풀이

/*
let T = Int(readLine()!)!

func getGCD(_ A: Int, _ B: Int) -> Int {
  if B == 0 { return A }
  return getGCD(B, A%B)
}

func getLCM(_ A: Int, _ B: Int) -> Int {
  return A*B / getGCD(A,B)
}

for _ in 0..<T {
  let arr = readLine()!.split(separator: " ").map { Int($0)! }
  print(getLCM(arr[0],arr[1]))
}
*/

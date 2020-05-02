
// MARK: - 하노이 탑 1914
// MARK: recursion swift 문제풀이

/*
let MX = 31
let N = Int(readLine()!)!
var K = [Int](repeating: 0, count: MX)

func countArr() {
  var idx = MX - 1
  while idx >= 0 {
    K[idx] += 1
    if K[idx] < 10 { return }
    K[idx] = 0
    idx -= 1
  }
}

func mulArr() {
  var idx = MX - 1
  var rem = 0
  while idx >= 0 {
    K[idx] = K[idx] * 2 + rem
    rem = (K[idx]) / 10
    K[idx] %= 10
    idx -= 1
  }
}

func printArr() {
  for i in K.indices {
    if K[i] > 0 {
      print(K[i..<MX].map { String($0) }.joined())
      return
    }
  }
  print(0)
}

for _ in 1...N {
  mulArr()
  countArr()
}

func hanoi(_ N: Int, _ from: Int, _ by: Int, _ to: Int) {
  if N == 0 { return }
  hanoi(N-1, from, to, by)
  print("\(from) \(to)")
  hanoi(N-1, by, from, to)
}

printArr()
if N <= 20 { hanoi(N, 1, 2, 3) }
*/

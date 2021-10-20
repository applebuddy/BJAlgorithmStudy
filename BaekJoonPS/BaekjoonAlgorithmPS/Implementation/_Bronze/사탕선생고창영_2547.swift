
// MARK: - 사탕선생 고창영 2547
// MARK: Implementation swift 문제풀이

/*
let T = Int(readLine()!)!
let MX = 26

func sumArr(_ A: [Int], _ B: [Int]) -> [Int] {
  var idx = MX-1
  var rem = 0
  var result = [Int](repeating: 0, count: MX)
  while idx >= 0 {
    result[idx] = (A[idx] + B[idx] + rem) % 10
    rem = (A[idx] + B[idx] + rem) / 10
    idx -= 1
  }

  return result
}

func canMod(_ A: [Int], _ mod: Int) -> Bool {
  if mod == 0 { return false }
  var idx = 0
  var RV = A
  while idx < MX {
    RV[idx] = RV[idx] % mod
    if idx + 1 < MX {
      RV[idx+1] += RV[idx] * 10
    }
    idx += 1
  }

  return RV.last! == 0
}

for _ in 0..<T {
  readLine()
  var G = [Int](repeating: 0, count: MX)

  let N = Int(readLine()!)!

  for _ in 0..<N {
    var B = [Int](repeating: 0, count: MX)
    let arr = Array(readLine()!).map { Int(String($0))! }
    let len = arr.count
    var j = 0
    for i in MX-len..<MX {
      B[i] = arr[j]
      j += 1
    }
    G = sumArr(G, B)
  }

  print(canMod(G, N) ? "YES" : "NO")
}
*/

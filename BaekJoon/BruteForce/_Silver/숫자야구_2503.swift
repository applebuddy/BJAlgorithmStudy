
// MARK: - 숫자야구 2503
// MARK: BruteForce swift 문제풀이

/*
let T = Int(readLine()!)!
var ST = Set<Int>(123...987)

for _ in 0..<T {
  let arr = readLine()!.split(separator: " ").map { Int(String($0))! }
  let ans = Array(String(arr[0])).map { Int(String($0))! }
  let strike = arr[1], ball = arr[2]
  var tST = Set<Int>()

  for i in ST {
    var C = [Int](repeating: 0, count: 26)
    var tNum = i
    var good = true
    var idx = 2
    var tS = 0, tB = 0

    var comp = [0, 0, 0]
    while tNum > 0 {
      if C[tNum % 10] > 0 || tNum % 10 == 0 { good = false; break }
      C[tNum % 10] += 1
      comp[idx] = tNum % 10
      tNum /= 10
      idx -= 1
    }

    if !good { continue }
    
    for i in ans.indices {
      if ans[i] == comp[i] { tS += 1 }
      else if C[ans[i]] > 0 { tB += 1 }
    }

    if tS == strike && tB == ball {
      tST.insert(i)
    }
  }

  ST = tST
}

print(ST.count)
*/

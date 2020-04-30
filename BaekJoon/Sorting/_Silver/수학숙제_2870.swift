
// MARK: 수학숙제 2870
// MARK: sorting swift 문제풀이

/*
let T = Int(readLine()!)!
var Ans = [[Int]]()

func trimZero(_ arr: inout [Int]) {
  for i in arr.indices {
    if arr[i] != 0 {
      arr = Array(arr[i..<arr.count])
      return
    }
  }

  arr = [0]
  return
}

func compare(_ A: [Int], _ B: [Int]) -> Bool {
  let aLen = A.count
  let bLen = B.count
  if aLen > bLen { return false }
  if aLen < bLen { return true }
  for i in 0..<aLen {
    if A[i] > B[i] { return false }
    if A[i] < B[i] { return true }
  }
  return true
}

for _ in 0..<T {
  let S = Array(readLine()!)
  var tmp = [Int]()
  for i in S.indices {
    let ascii = Int(S[i].asciiValue!) - 48
    if ascii >= 0 && ascii <= 9 {
      tmp.append(ascii)
    } else if !tmp.isEmpty {
      trimZero(&tmp)
      Ans.append(tmp)
      tmp = []
    }
  }
  if !tmp.isEmpty {
    trimZero(&tmp)
    Ans.append(tmp)
    tmp = []
  }
}

Ans.sort { compare($0, $1) }

for i in Ans.indices {
  print(Ans[i].map { String($0) }.joined())
}
*/

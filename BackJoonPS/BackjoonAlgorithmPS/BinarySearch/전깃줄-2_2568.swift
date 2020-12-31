
// MARK: - 전깃줄-2 2568
// MARK: LIS + binarySearch swift 문제풀이

/*
let Len = Int(readLine()!)!
var G = [[Int]]()
for _ in 0..<Len {
  G.append(readLine()!.split(separator: " ").map { Int($0)! })
}

extension Array where Element == Int {
  func lowerBound(_ k: Int) -> Int {
    var left = 0
    var right = self.count - 1
    while left <= right {
      let mid = (left + right) / 2
      if self[mid] >= k {
        right = mid - 1
      } else {
        left = mid + 1
      }
    }
    return left
  }
}

G.sort { $0[0] < $1[0] }
var A = [Int]()
var L = [Int](repeating: 0, count: Len)

for i in G.indices {
  let idx = A.lowerBound(G[i][1])
  if idx < A.count {
    A[idx] = G[i][1]
    L[i] = idx + 1
  } else {
    A.append(G[i][1])
    L[i] = A.count
  }
}

var tgt = A.count
var ldx = L.count - 1
var C = [Bool](repeating: false, count: 500001)
while ldx >= 0 {
  if L[ldx] == tgt {
    C[G[ldx][1]] = true
    tgt -= 1
  }
  if tgt <= 0 { break }
  ldx -= 1
}

var Ans = [String]()
for i in G.indices {
  if C[G[i][1]] == false {
    Ans.append("\(G[i][0])")
  }
}

print(Ans.count, Ans.joined(separator: "\n"), separator: "\n")
*/

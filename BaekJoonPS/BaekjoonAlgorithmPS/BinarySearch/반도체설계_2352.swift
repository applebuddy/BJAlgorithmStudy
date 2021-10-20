
// MARK: - 반도체 설계
// MARK: LIS BinarySearch swift 문제풀이

/*
let Len = Int(readLine()!)!
let G = readLine()!.split(separator: " ").map { Int($0)! }
var Ans = [Int]()

extension Array where Element == Int {
  func lowerBound(_ val: Int) -> Int {
    var left = 0
    var right = self.count - 1
    while left <= right {
      let mid = (left + right) / 2
      if mid >= self.count { break }
      if self[mid] > val {
        right = mid - 1
      } else {
        left = mid + 1
      }
    }
    return left
  }
}

for i in G.indices {
  let idx = Ans.lowerBound(G[i])
  if idx < Ans.count {
    Ans[idx] = G[i]
  } else {
    Ans.append(G[i])
  }
}

print(Ans.count)
*/

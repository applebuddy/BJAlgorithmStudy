
// MARK: - 용액 2467
// MARK: binarySearch swift 문제풀이

/*
let N = Int(readLine()!)!
let G = readLine()!.split(separator: " ").map { Int($0)! }
var MN = Int.max
var Ans = (0, 0)

for i in G.indices {
  var left = i + 1
  var right = N-1
  while left <= right {
    let mid = (left + right) / 2
    let sum = G[i] + G[mid]
    var compSum = sum
    compSum *= sum < 0 ? -1 : 1
    if MN > compSum {
      MN = compSum
      Ans = (G[i], G[mid])
    }

    if MN == 0 { break }
    if sum < 0 {
      left = mid + 1
    } else {
      right = mid - 1
    }
  }
  if MN == 0 { break }
}

print(Ans.0, Ans.1, separator: " ")
*/

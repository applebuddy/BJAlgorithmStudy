
// MARK: - 용액 합성하기 14921
// MARK: binarySearch swift 문제풀이

/*
let N = Int(readLine()!)!
let G = readLine()!.split(separator: " ").map { Int($0)! }
let len = G.count
var diff = Int.max
var Ans = Int.max

for i in G.indices {
  var left = i+1
  var right = len-1
  while left <= right {
    let mid = (left + right) / 2
    let sum = G[i] + G[mid]
    let mix = Int(sum.magnitude)
    if diff > mix {
      diff = mix
      Ans = sum
    }
    if sum < 0 {
      left = mid + 1
    } else {
      right = mid - 1
    }
  }
}

print(Ans)
*/

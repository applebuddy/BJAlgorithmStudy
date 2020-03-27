
// MARK: - 순서쌍의 곱의 합 13900
// MARK: swift 문제풀이

/*
let len = Int(readLine()!)!
let arr = readLine()!.split(separator: " ").map { Int($0)! }

var DP = [Int](repeating: 0, count: len + 1)
for i in arr.indices {
  DP[i+1] = DP[i] + arr[i]
}

var Ans = 0
for i in arr.indices {
  Ans += arr[i] * (DP[len] - DP[i+1])
}

print(Ans)
*/


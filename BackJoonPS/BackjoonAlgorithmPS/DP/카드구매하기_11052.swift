
// MARK: - 카드구매하기
// MARK: DP swift 문제풀이

/*
import Foundation

let N = Int(readLine()!)!
let arr = [0] + readLine()!.split(separator: " ").map { Int($0)! }
var DP = [Int](repeating: 0, count: N+1)

func go(_ N: Int) -> Int {
    if N < 1 { return 0 }
    if DP[N] > 0 { return DP[N] }
    for i in 1...N { DP[N] = max(arr[i]+go(N-i), DP[N]) }
    return DP[N]
}

print(go(N))
*/

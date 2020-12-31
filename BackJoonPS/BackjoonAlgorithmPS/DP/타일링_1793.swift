
// MARK: - 타일링 1793
// MARK: DP swift 문제풀이

/*
import Foundation

let MAX = 1001

func mulArr(_ val: Int, _ arr: inout [Int]) {
    let len = MAX
    var idx = len - 1
    var rem = 0
    var result = [Int](repeating: 0, count: MAX)
    while idx >= 0 {
        result[idx] = (arr[idx] * val + rem) % 10
        rem = (arr[idx] * val + rem) / 10
        idx -= 1
    }
    arr = result
}

func plusArr(_ first: inout [Int], _ second: inout [Int]) -> [Int] {
    let len = MAX
    var idx = len - 1
    var rem = 0
    var result = [Int](repeating: 0, count: MAX)
    while idx >= 0 {
        result[idx] = (first[idx] + second[idx] + rem) % 10
        rem = (first[idx] + second[idx] + rem) / 10
        idx -= 1
    }
    return result
}

func getString(_ arr: inout [Int]) -> String {
    var flag = false
    var result = [String]()
    for i in arr.indices {
        if arr[i] != 0 { flag = true }
        if flag {
            result.append("\(arr[i])")
        }
    }
    return result.joined()
}

while let _N = readLine() {
    let N = Int(_N)!
    if N == 0 { print(1); continue }
    var pprev = [Int](repeating: 0, count: MAX)
    pprev[MAX-1] = 1
    var prev = [Int](repeating: 0, count: MAX)
    var Ans = [Int](repeating: 0, count: MAX)
    prev[MAX-1] = 3
    if N == 1 { print(getString(&pprev)); continue }
    else if N == 2 { print(getString(&prev)); continue }
    for _ in 3...N {
        mulArr(2, &pprev)
        Ans = plusArr(&pprev, &prev)
        pprev = prev
        prev = Ans
    }
    print(getString(&Ans))
}
*/


// MARK: - Maximum-Subarray 10211
// MARK: DP swift 문제풀이

/*
let T = Int(readLine()!)!
for _ in 0..<T {
    let _ = readLine()
    let arr = readLine()!.split(separator: " ").map { Int($0)! }
    var max = 0, Ans = -1001
    for i in arr.indices {
        max += arr[i]
        Ans = max > Ans ? max : Ans
        if max < 0 { max = 0 }
    }
    print(Ans)
}
*/

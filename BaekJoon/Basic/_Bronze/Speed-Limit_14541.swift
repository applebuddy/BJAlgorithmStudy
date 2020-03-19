
// MARK: - Speed Limit 14541
// MARK: swift 문제풀이

/*
while let _T = readLine() {
    let T = _T.split(separator: " ").map { Int($0)! }[0]
    if T == -1 { break }
    var prev = 0, Ans = 0
    for _ in 0..<T {
        let arr = readLine()!.split(separator: " ").map { Int($0)! }
        let m = arr[0], t = arr[1]
        Ans += m * (t - prev)
        prev = t
    }
    print("\(Ans) miles")
}
*/

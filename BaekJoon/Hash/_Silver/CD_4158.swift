
// MARK: - CD Hash 시간초과답안

/*
while true {
    let arr = readLine()!.split(separator: " ").map { Int($0)! }
    let N = arr[0], M = arr[1]
    if N == 0 && M == 0 { break }
    var dic = [Int:Int]()
    var Ans = 0
    for _ in 0..<N {
        let n = Int(readLine()!)!
        dic[n] = (dic[n] ?? 0) + 1
    }
    
    for _ in 0..<M {
        let n = Int(readLine()!)!
        if dic[n] != nil && dic[n]! > 0 {
            dic[n] = dic[n]! - 1
            Ans += 1
        }
    }
    
    print(Ans)
}
*/

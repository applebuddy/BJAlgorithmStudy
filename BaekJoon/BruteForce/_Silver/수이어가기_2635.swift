
// MARK: - 수이어가기 2635

// MARK: bruteForce swift 문제풀이

typealias Pair = (Int, [Int])
let N = Int(readLine()!)!
var Ans: Pair = (0, [])

(max(1, N / 2) ... N).forEach {
    var prev = N
    var now = $0
    var list = [prev, now]
    while prev - now >= 0 {
        let tmp = prev
        prev = now
        now = tmp - now
        list.append(now)
    }

    if list.count > Ans.0 {
        Ans.0 = list.count
        Ans.1 = list
    }
}

print("\(Ans.0)\n\(Ans.1.map { String($0) }.joined(separator: " "))")

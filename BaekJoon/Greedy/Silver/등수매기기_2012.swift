
// MARK: - 등수매기기 2012
// MARK: Greedy swift 문제풀이

/*
let N = Int(readLine()!)!
var V = [Int]()
for _ in 0..<N {
    let num = Int(readLine()!)!
    V.append(num)
}

V.sort()

var idx = 1
var Ans = 0
for i in V.indices {
    Ans += V[i] > idx ? V[i] - idx : idx - V[i]
    idx += 1
}

print(Ans)
*/

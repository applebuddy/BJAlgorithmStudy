
// MARK: - 세수고르기 1503
// MARK: BruteForce swift 문제풀이

/*
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let MAX = 1001
let N = arr[0], M = arr[1]
var P = [Int](0...MAX)

var S = [Int]()
if M > 0 {
    S = readLine()!.split(separator: " ").map { Int($0)!}
}

for i in S.indices {
    P[S[i]] = -1
}
P = P.filter { $0 != -1 }

let len = P.count
var Ans = Int(2e9)
for i in 1..<len {
    for j in 1..<len {
        if P[i] * P[j] > N && P[i] * P[j] - N > Ans { break }
        for k in 1..<len {
            let mul = P[i] * P[j] * P[k]
            let diff = N > mul ? N - mul : mul - N
            if Ans > diff {
                Ans = diff
            } else if mul > N { break }
        }
    }
}

print(Ans)
*/


// MARK: - 친구 10864
// MARK: swift 문제풀이

/*
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], M = arr[1]
var Ans = [Int](repeating: 0, count: N+1)
for _ in 0..<M {
    let arr2 = readLine()!.split(separator: " ").map { Int($0)! }
    let A = arr2[0], B = arr2[1]
    Ans[A] += 1; Ans[B] += 1
}

for i in 1...N { print(Ans[i]) }
*/

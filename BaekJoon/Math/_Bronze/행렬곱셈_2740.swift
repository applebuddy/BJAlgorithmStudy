
// MARK: - 행렬 곱셈 2740
// MARK: Math swift 문제풀이

/*

var arr = readLine()!.split(separator: " ").map { Int($0)! }
var N = arr[0], M = arr[1]
var A = [[Int]](repeating: [Int](), count: N)
for i in 0..<N {
    A[i] = readLine()!.split(separator: " ").map { Int($0)! }
}

arr = readLine()!.split(separator: " ").map { Int($0)! }
var N2 = arr[0], M2 = arr[1]

var Ans = [[Int]](repeating: [Int](repeating: 0, count: M2), count: N)
var B = [[Int]](repeating: [Int](), count: N2)
for i in 0..<N2 {
    B[i] = readLine()!.split(separator: " ").map { Int($0)! }
}

for i in A.indices {
    for k in B.indices {
        for j in B[k].indices {
            Ans[i][j] += A[i][k] * B[k][j]
        }
    }
}

for i in Ans.indices { print(Ans[i].map { String($0) }.joined(separator: " ")) }

*/

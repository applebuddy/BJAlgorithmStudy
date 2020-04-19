
// MARK: - 받아올림 4388
// MARK: math swift 문제풀이

/*
let MX = 11

func countUp(_ A: inout [Int], _ B: inout [Int]) -> Int {
    var idx = MX-1, rem = 0
    var Ans = 0
    var result = [Int](repeating: 0, count: MX)
    while idx >= 0 {
        result[idx] = (rem + A[idx] + B[idx]) % 10
        rem = (rem + A[idx] + B[idx]) / 10
        Ans += rem>0 ? 1 : 0
        idx -= 1
    }
    return Ans
}

while true {
    let arr = readLine()!.split(separator: " ").map { String($0) }
    if arr[0]=="0" && arr[1]=="0" { break }
    var A = Array(arr[0]).map { Int(String($0))! }
    var B = Array(arr[1]).map { Int(String($0))! }
    let aLen = A.count
    let bLen = B.count
    A = [Int](repeating: 0, count: MX-aLen) + A
    B = [Int](repeating: 0, count: MX-bLen) + B
    print(countUp(&A, &B))
}
*/

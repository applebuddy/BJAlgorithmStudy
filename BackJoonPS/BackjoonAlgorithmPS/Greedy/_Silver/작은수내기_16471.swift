
// MARK: - 작은 수 내기 16471
// MARK: swift 문제풀이

/*
let len = Int(readLine()!)!
var A = readLine()!.split(separator: " ").map { Int($0)! }.sorted()
var B = readLine()!.split(separator: " ").map { Int($0)! }.sorted()

var j = 0, cnt = 0
for i in A.indices {
    while j < len {
        if B[j] > A[i] { cnt += 1; j += 1; break }
        j += 1
    }
    if j == len { break }
}

print(cnt >= (len+1)/2 ? "YES" : "NO")
*/


// MARK: - Dream Counting 6212
// MARK: swift 문제풀이

/*
let arr = readLine()!.split(separator: " ").compactMap { Int($0) }
let from = arr[0], to = arr[1]
var C = [Int](repeating: 0, count: 10)
for i in from...to {
    var n = i
    while n > 0 {
        C[n%10] += 1
        n /= 10
    }
}

print(C.map { String($0) }.joined(separator: " "))
*/

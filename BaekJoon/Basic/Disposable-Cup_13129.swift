
// MARK: - Disposable-Cup
// MARK: swift 문제풀이

/*
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let A = arr[0], B = arr[1], N = arr[2]
let baseH = A+B
var Ans = [String]()
var idx = N-1
while idx >= 0 {
    Ans.append("\(baseH*(N-idx)+A*idx)")
    idx -= 1
}

print(Ans.joined(separator: " "))
*/

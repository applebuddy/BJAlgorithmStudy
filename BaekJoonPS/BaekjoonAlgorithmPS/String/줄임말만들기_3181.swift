
// MARK: - 줄임말 만들기 3181

// MARK: String swift 문제풀이

let dic: [String: Int] = ["i": 0, "pa": 0, "te": 0, "ni": 0, "niti": 0, "a": 0, "ali": 0, "nego": 0, "no": 0, "ili": 0]
var cnt = 0
print(readLine()!.split(separator: " ").map { String($0) }.reduce(into: "") {
    defer { cnt += 1 }
    if cnt > 0, dic[$1] != nil { return }
    $0 += $1.first!.uppercased()
})

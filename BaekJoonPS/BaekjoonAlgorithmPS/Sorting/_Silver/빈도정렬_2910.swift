
// MARK: - 빈도정렬 2910
// MARK: swift 문제풀이

/*
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], C = arr[1]
var dic = [Int:Int]()
var sDic = [Int:Int]()
var result = [String]()
let seq = readLine()!.split(separator: " ").map { Int($0)! }
for i in seq.indices {
    if sDic[seq[i]] == nil { sDic[seq[i]] = i }
    dic[seq[i]] = (dic[seq[i]] ?? 0) + 1
}

var Ans = [(Int, Int, Int)]()
for (key,value) in dic {
    Ans.append((sDic[key]!, key, value))
}

Ans.sort { $0.2 > $1.2 || ($0.2 == $1.2 && $0.0 < $1.0) }

for i in Ans.indices {
    result.insert(contentsOf: [String](repeating: "\(Ans[i].1)", count: Ans[i].2), at: result.count)
}

print(result.joined(separator: " "))
*/

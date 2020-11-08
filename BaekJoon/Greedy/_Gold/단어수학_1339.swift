
// MARK: - 단어 수학 1339

// MARK: Greedy swift 문제풀이

let ip = { readLine()! }
let N = Int(ip())!
var SV = [[Character]]()
var dic = [Int](repeating: 0, count: 26)

extension Character {
    var ascii: Int {
        return Int(asciiValue!) - 65
    }
}

(0 ..< N).forEach { _ in
    let arr = Array(ip())
    SV.append(arr)
    let len = arr.count
    var idx = len - 1
    var value = 1
    while idx >= 0 {
        let ascii = arr[idx].ascii
        dic[ascii] += value
        value *= 10
        idx -= 1
    }
}

var list = [(Int, Int)]()
for idx in dic.indices {
    if dic[idx] == 0 { continue }
    list.append((idx, dic[idx]))
}

list.sort { $0.1 > $1.1 }
var score = 9
list.forEach { dic[$0.0] = score; score -= 1 }

var Ans = 0
SV.forEach {
    var sum = 0
    $0.forEach { char in
        sum = sum * 10 + dic[char.ascii]
    }
    Ans += sum
}

print(Ans)

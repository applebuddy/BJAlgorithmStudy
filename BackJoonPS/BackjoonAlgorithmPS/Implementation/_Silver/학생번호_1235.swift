
// MARK: - 학생번호_1235
// MARK: swift 문제풀이

/*
let N = Int(readLine()!)!
var Ans = 0
var V = [[String]](repeating: [String](), count: N)
for i in 0..<N {
    V[i] = Array(readLine()!).map { String($0) }
}

let len = V.first!.count
for i in 1...len {
    var dic = [[String]: Int]()
    for j in V.indices {
        dic[Array(V[j][len-i..<len])] = 1
    }
    if dic.count == N { Ans = i; break }
}

print(Ans)
*/

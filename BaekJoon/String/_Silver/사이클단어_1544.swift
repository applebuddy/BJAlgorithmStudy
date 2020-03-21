
// MARK: - 사이클단어 1544
// MARK: string swift 문제풀이

/*
let N = Int(readLine()!)!
var dic = [String: Int]()
var tempDic = dic
var Ans = 0

func isDiff(_ S: inout [String]) -> Bool {
    defer { dic = tempDic }
    for i in S.indices {
        var comp = ""
        tempDic = dic
        comp = S[i..<S.count].joined()
        if i-1 >= 0 { comp += S[0...i-1].joined() }
        if tempDic[comp] != nil { return false }
        else { tempDic[comp] = 1 }
    }
    return true
}

for _ in 0..<N {
    var S = Array(readLine()!).map { String($0) }
    if isDiff(&S) { Ans += 1 }
}

print(Ans)
*/

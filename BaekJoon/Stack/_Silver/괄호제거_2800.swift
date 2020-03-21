
// MARK: - 괄호제거 2800
// MARK: Stack, DFS swift 문제풀이

/*
let S = Array(readLine()!).map { String($0) }
var depth = 0
var idx = [(Int,Int)]()
var dic = [String: Int]()
func DFS(_ i: Int, _ S: [String]) {
    if i >= idx.count { return }
    var nS = S
    nS[idx[i].0] = " "
    nS[idx[i].1] = " "
    let ns = nS.filter { $0 != " " }.joined()
    dic[ns] = 1
    DFS(i+1, nS)
    DFS(i+1, S)
}

var STK = [Int]()
for i in S.indices {
    if S[i] == "(" {
        STK.append(i)
        
    } else if S[i] == ")" {
        idx.append((STK.last!,i))
        STK.removeLast()
    }
}

DFS(0, S)
dic.map { $0.key }.sorted().forEach { print($0) }
*/

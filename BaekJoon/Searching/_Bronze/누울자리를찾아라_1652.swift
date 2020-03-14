
// MARK: - 누울 자리를 찾아라 1652
// MARK: swift 문제풀이

/*
let N = Int(readLine()!)!
var G = [[Character]](repeating: [Character](), count: N)
for i in 0..<N {
    G[i] = Array(readLine()!)
}

var Can = [0, 0]
for i in G.indices {
    var vCnt=0, hCnt = 0
    var can = [0, 0]
    for j in G[i].indices {
        if G[i][j] == "." { if hCnt != -1 { hCnt += 1 } }
        else { hCnt = 0 }
        if G[j][i] == "." { if vCnt != -1 { vCnt += 1 } }
        else { vCnt = 0 }
        if hCnt >= 2 { can[0] += 1; hCnt = -1 }
        if vCnt >= 2 { can[1] += 1; vCnt = -1 }
        
    }
    Can[0] += can[0]
    Can[1] += can[1]
}
print(Can[0], Can[1])
*/

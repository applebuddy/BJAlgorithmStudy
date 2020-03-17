
// MARK: - 사탕게임 3085
// MARK: bruteForce swift 문제풀이

/*
let N = Int(readLine()!)!
var G = [[Character]](repeating: [Character](), count: N)
for i in 0..<N { G[i] = Array(readLine()!) }
let dx = [0, 1]
let dy = [1, 0]
var Ans = 1

func checkG(_ tG: inout [[Character]]) -> Int {
    var result = 1
    for i in tG.indices {
        var cnt = 1
        for j in 0..<N-1 {
            if tG[i][j] == tG[i][j+1] { cnt += 1 }
            else { cnt = 1 }
            result = result < cnt ? cnt : result
        }
    }
    
    for i in 0..<N {
        var cnt = 1
        for j in 0..<N-1 {
            if tG[j][i] == tG[j+1][i] { cnt += 1 }
            else { cnt = 1 }
            result = result < cnt ? cnt : result
        }
    }
    
    return result
}

for i in 0..<N {
    for j in 0..<N {
        for k in 0..<2 {
            let nx = i + dx[k]
            let ny = j + dy[k]
            if nx < 0 || ny < 0 || nx >= N || ny >= N { continue }
            var tG = G
            let temp = tG[i][j]
            tG[i][j] = tG[nx][ny]
            tG[nx][ny] = temp
            Ans = max(Ans,checkG(&tG))
        }
    }
}

print(Ans)
*/


// MARK: - 인구이동 16234
// MARK: DFS swift 문제풀이

/*
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], L = arr[1], R = arr[2]
let dx = [0,0,-1,1]
let dy = [1,-1,0,0]

var G = [[Int]](repeating: [Int](), count: N)
var C = [[Int]](repeating: [Int](repeating: 0, count: N), count: N)
var sum = 0, totMove = 0, Ans = 0
var path = [(Int,Int)]()
for i in 0..<N {
    G[i] = readLine()!.split(separator: " ").map { Int($0)! }
}

func DFS(_ X: Int, _ Y: Int) {
    for i in 0..<4 {
        let nx = X + dx[i]
        let ny = Y + dy[i]
        if nx < 0 || ny < 0 || nx >= N || ny >= N { continue }
        let diff = G[X][Y]>G[nx][ny] ? G[X][Y]-G[nx][ny] : G[nx][ny]-G[X][Y]
        if C[nx][ny] == 1 || diff < L || diff > R { continue }
        C[nx][ny] = 1
        totMove += 1
        sum += G[nx][ny]
        path.append((nx,ny))
        DFS(nx,ny)
    }
}

while true {
    C = [[Int]](repeating: [Int](repeating: 0, count: N), count: N)
    totMove = 0
    for i in 0..<N {
        for j in 0..<N {
            if C[i][j] == 1 { continue }
            C[i][j] = 1
            sum = 0
            path = [(i,j)]
            sum += G[i][j]
            DFS(i,j)
            let mergeValue = sum / path.count
            for k in path.indices {
                G[path[k].0][path[k].1] = mergeValue
            }
        }
    }
    if totMove == 0 { break }
    else { Ans += 1 }
}

print(Ans)
*/

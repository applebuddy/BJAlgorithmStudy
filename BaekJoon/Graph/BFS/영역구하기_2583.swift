
// MARK: - 영역구하기 2583
// MARK: BFS swift 문제풀이

/*

let arr = readLine()!.split(separator: " ").map { Int($0)! }
let M = arr[0], N = arr[1], K = arr[2]
let dx = [0,0,-1,1]
let dy = [-1,1,0,0]

var G = [[Int]](repeating: [Int](repeating: 0, count: M), count: N)
var Ans = [Int]()

for _ in 0..<K {
    let arr2 = readLine()!.split(separator: " ").map { Int($0)! }
    for i in arr2[0]..<arr2[2] {
        for j in arr2[1]..<arr2[3] {
            G[i][j] = -1
        }
    }
}

func BFS(_ X: Int, _ Y: Int) -> Int {
    var Q = [(Int,Int)]()
    var cnt = 0
    Q.append((X,Y))
    G[X][Y] = 3
    cnt += 1
    
    while !Q.isEmpty {
        let node = Q.first!
        Q.removeFirst()
        let ox = node.0
        let oy = node.1
        for i in 0..<4 {
            let nx = ox + dx[i]
            let ny = oy + dy[i]
            if nx < 0 || ny < 0 || nx >= N || ny >= M { continue }
            if G[nx][ny] == -1 || G[nx][ny] == 3 { continue }
            G[nx][ny] = 3
            cnt += 1
            Q.append((nx,ny))
        }
    }
    
    return cnt
}

for i in 0..<N {
    for j in 0..<M {
        if G[i][j] == -1 || G[i][j] == 3 { continue }
        Ans.append(BFS(i,j))
    }
}

print(Ans.count)
print(Ans.sorted().map { String($0) }.joined(separator: " "))

*/

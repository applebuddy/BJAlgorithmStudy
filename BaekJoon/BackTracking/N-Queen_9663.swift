
// MARK: - N-Queen 9663

// MARK: Backtracking swift 문제풀이

let N = Int(readLine()!)!
var G = [[Bool]](repeating: [Bool](repeating: false, count: N), count: N)
var cnt = 0
var colDic = [Bool](repeating: false, count: N)
var pos = [(-1, -1), (-1, 0), (-1, 1)]

func isValid(_ x: Int, _ y: Int) -> Bool {
    for dir in pos.indices {
        var pX = x, pY = y
        while true {
            pX += pos[dir].0
            pY += pos[dir].1
            if pX < 0 || pY < 0 || pX >= N || pY >= N { break }
            if G[pX][pY] == true {
                return false
            }
        }
    }
    return true
}

func nQueen(_ row: Int) {
    for col in 0 ..< N {
        if colDic[col] == false, isValid(row, col) {
            if row == N - 1 { cnt += 1; continue }
            G[row][col] = true
            colDic[col] = true
            nQueen(row + 1)
            G[row][col] = false
            colDic[col] = false
        }
    }
}

nQueen(0)
print(cnt)

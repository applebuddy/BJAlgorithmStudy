
// MARK: - 수도쿠 2580

// MARK: Backtracking swift 문제풀이

import Foundation

let N = 9
var colDic = [[Bool]](repeating: [Bool](repeating: false, count: N + 1), count: N)
var rowDic = [[Bool]](repeating: [Bool](repeating: false, count: N + 1), count: N)
var areaDic = [[[Bool]]](repeating: [[Bool]](repeating: [Bool](repeating: false, count: N + 1), count: 3), count: 3)
var G = [[Int]]()
var list = [(Int, Int)]()

(0 ..< 9).forEach { row in
    let arr = Array(readLine()!)
    var idx = 0, col = 0
    var rowList = [Int]()
    while idx < arr.count {
        if arr[idx] == "0" {
            list.append((row, col))
            rowList.append(0)
        } else {
            let ascii = Int(arr[idx].asciiValue!) - 48
            colDic[col][ascii] = true
            rowDic[row][ascii] = true
            areaDic[row / 3][col / 3][ascii] = true
            rowList.append(ascii)
        }
        col += 1
        idx += 2
    }

    G.append(rowList)
}

func DFS(_ pos: Int) {
    if pos >= list.count {
        var answer = ""
        G.forEach {
            answer += $0.map { "\($0)" }.joined(separator: " ") + "\n"
        }

        print(answer)
        exit(0)
    }

    let x = list[pos].0, y = list[pos].1
    for num in 1 ... 9 {
        if areaDic[x / 3][y / 3][num] == true
            || rowDic[x][num] == true
            || colDic[y][num] == true { continue }
        rowDic[x][num] = true
        colDic[y][num] = true
        areaDic[x / 3][y / 3][num] = true
        G[x][y] = num
        DFS(pos + 1)
        rowDic[x][num] = false
        colDic[y][num] = false
        areaDic[x / 3][y / 3][num] = false
    }
}

DFS(0)

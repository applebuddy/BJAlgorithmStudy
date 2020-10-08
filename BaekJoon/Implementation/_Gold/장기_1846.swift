
// MARK: - 장기 1846

// MARK: swift 문제풀이

import Foundation

let N = Int(readLine()!)!
if N == 3 { print(-1); exit(0) }
var rem = N
var colDic = [Bool](repeating: false, count: N + 1)
var Ans = [String]()
var row = 0
var col = 1
while Ans.count < N {
    if row == col
        || (N - row - 1) == col
        || colDic[col] == true {
        col -= 1
        if col < 0 { col = N - 1 }
        continue
    }

    colDic[col] = true
    Ans.append("\(col + 1)")
    col -= 1
    if col < 0 { col = N - 1 }
    row += 1
}

print(Ans.joined(separator: "\n"))

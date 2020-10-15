
// MARK: - A -> B 16953

// MARK: BFS swift 문제풀이

import Foundation

let arr = readLine()!.split(separator: " ").map { Int(String($0))! }
let start = arr[0], target = arr[1]

func BFS() {
    var Q = [(Int, Int)]()
    Q.append((start, 1))
    var cur = 0
    while cur < Q.count {
        let now = Q[cur]
        let num = now.0
        let cnt = now.1
        cur += 1
        let first = num * 2
        if first <= target {
            if first == target { print(cnt + 1); exit(0) }
            Q.append((first, cnt + 1))
        }

        let second = num * 10 + 1
        if second <= target {
            if second == target { print(cnt + 1); exit(0) }
            Q.append((second, cnt + 1))
        }
    }
}

BFS()
print(-1)

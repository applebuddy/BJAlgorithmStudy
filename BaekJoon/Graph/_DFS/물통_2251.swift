
// MARK: - 물통 2251

// MARK: DFS swift 문제풀이

var result: Set<Int> = []
var dic: [[Int]: Bool] = [:]
let arr = readLine()!.split(separator: " ").map { Int(String($0))! }

func DFS(_ tuple: [Int]) {
    if dic[tuple] == true { return }
    dic[tuple] = true
    if tuple[0] == 0 {
        result.insert(tuple[2])
    }

    (0 ..< 3).forEach { idx in
        (0 ..< 3).forEach { jdx in
            if idx == jdx { return }
            var new = tuple
            new[jdx] += new[idx]
            new[idx] = 0
            if new[jdx] > arr[jdx] {
                new[idx] = new[jdx] - arr[jdx]
                new[jdx] = arr[jdx]
            }
            DFS(new)
        }
    }
}

DFS([0, 0, arr[2]])
print(result.sorted().map { "\($0)" }.joined(separator: " "))

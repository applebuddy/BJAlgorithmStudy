
// MARK: - 미친로봇 1405

// MARK: DFS swift 문제풀이

let arr = readLine()!.split(separator: " ").map { Double(String($0))! }
let N = Int(arr[0])
var result: Double = 0.0
let score = [arr[1], arr[2], arr[3], arr[4]].map { $0 / 100.0 }
var distDic = [[Bool]](repeating: [Bool](repeating: false, count: 30), count: 30)
let dx = [1, -1, 0, 0]
let dy = [0, 0, 1, -1]

func DFS(_ cnt: Int, _ X: Int, _ Y: Int, _ sucValue: Double) {
    if distDic[X][Y] { return }
    if cnt == N {
        result += sucValue
        return
    }

    distDic[X][Y] = true
    dx.indices.forEach { DFS(cnt + 1, X + dx[$0], Y + dy[$0], sucValue * score[$0]) }
    distDic[X][Y] = false
}

DFS(0, 15, 15, 1.0)
print(result)

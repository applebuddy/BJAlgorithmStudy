
// MARK: - 곱셈 1629

// MARK: DFS swift 문제풀이

let arr = readLine()!.split(separator: " ").map { Int(String($0))! }
let A = arr[0], B = arr[1], C = arr[2]

func DFS(_ cnt: Int) -> Int {
    if cnt == 1 {
        return A
    }
    var result = 0
    if cnt % 2 == 0 {
        let task = DFS(cnt / 2)
        result = task % C * task % C
    } else {
        let ccnt = cnt - 1
        let task = DFS(ccnt / 2)
        result = task % C * task % C * A % C
    }
    return result % C
}

print(DFS(B) % C)

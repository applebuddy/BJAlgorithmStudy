
// MARK: - 다음 수 구하기 2697

// MARK: Math swift 문제풀이

let N = Int(readLine()!)!

extension Array where Element == Character {
    mutating func nextPerm() -> Bool {
        let len = count
        var idx = len - 1
        while idx > 0, self[idx - 1] >= self[idx] { idx -= 1 }
        if idx <= 0 { return false }
        var jdx = len - 1
        while self[jdx] <= self[idx - 1] { jdx -= 1 }
        swapAt(idx - 1, jdx)
        jdx = len - 1
        while idx < jdx {
            swapAt(idx, jdx)
            idx += 1; jdx -= 1
        }
        return true
    }
}

(0 ..< N).forEach { _ in
    var arr = Array(readLine()!)
    if arr.nextPerm() {
        print(arr.map { "\($0)" }.joined())
    } else {
        print("BIGGEST")
    }
}

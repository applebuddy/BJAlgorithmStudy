
// MARK: - 절댓값힙 11286
// MARK: swift 문제풀이

/*
import Foundation

let T = Int(readLine()!)!
var PQ = [Int]()

func abs(_ val: Int) -> Int {
    return val > 0 ? val : -1 * val
}

extension Array where Element == Int {
    mutating func binarySearchInsert(_ val: Int) {
        var left = 0, right = self.count - 1
        while left <= right {
            let mid = (left + right) / 2
            if abs(self[mid]) > abs(val) || (abs(self[mid]) == abs(val) && self[mid] > val) {
                left = mid + 1
            } else {
                right = mid - 1
            }
        }
        self.insert(val, at: left)
    }
}

for _ in 0..<T {
    let X = Int(readLine()!)!
    if X == 0 {
        if PQ.isEmpty { print(0) }
        else { print(PQ.last!); PQ.removeLast()  }
    } else {
        PQ.binarySearchInsert(X)
    }
}
*/

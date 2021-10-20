
// MARK: - 랜선자르기 1654
// MARK: BinarySearch swift 문제풀이

let arr = readLine()!.split(separator: " ").map { Int($0)! }
let K = arr[0], N = arr[1]
var list = [Int]()

extension Array where Element == Int {
    func getAns() -> Int {
        var Ans = list.last! / N
        var left = 1
        var right = list.last!
        while left <= right {
            let mid = (left + right) / 2
            var cnt = 0
            forEach { cnt += $0 / mid }
            if cnt >= N {
                left = mid + 1
                Ans = mid > Ans ? mid : Ans
            } else {
                right = mid - 1
            }
        }
        return Ans
    }
}

(0 ..< K).forEach { _ in
    list.append(Int(readLine()!)!)
}

list.sort()
print(list.getAns())

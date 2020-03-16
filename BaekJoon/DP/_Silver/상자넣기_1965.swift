
// MARK: - 상자넣기 1965
// MARK: LIS swift 문제풀이

/*

let N = Int(readLine()!)!
let arr = readLine()!.split(separator: " ").map { Int($0)! }
var cmp = [Int]()

extension Array where Element == Int {
    mutating func binarySearch(_ val: Int) -> Int {
        var left = 0, right = self.count-1
        while left <= right {
            let mid = (left + right) / 2
            if self[mid] < val { left = mid + 1 }
            else { right = mid - 1 }
        }
        return left
    }
}

for i in arr.indices {
    let idx = cmp.binarySearch(arr[i])
    if idx == cmp.count { cmp.append(arr[i]) }
    else { cmp[idx] = arr[i] }
}

print(cmp.count)

*/

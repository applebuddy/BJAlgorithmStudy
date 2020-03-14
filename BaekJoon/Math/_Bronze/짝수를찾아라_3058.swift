
// MARK: - 짝수를찾아라 3058
// MARK: math swift 문제풀이

/*
let T = Int(readLine()!)!
for _ in 0..<T {
    let arr = readLine()!.split(separator: " ").map { Int($0)! }
    var mVal = 101
    var sum = 0
    for i in arr.indices {
        if arr[i] & 1 == 0 {
            sum += arr[i]
            mVal = mVal > arr[i] ? arr[i] : mVal
        }
    }
    print("\(sum) \(mVal)")
}
*/

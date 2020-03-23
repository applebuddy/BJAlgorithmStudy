
// MARK: - 나머지 계산 3944
// MARK: math swift 문제풀이

/*
let T = Int(readLine()!)!
for _ in 0..<T {
    let arr = readLine()!.split(separator: " ")
    let b = Int(arr[0])!
    let S = Array(arr[1])
    let r = b - 1
    var idx = S.count - 1
    var val = 0
    while idx >= 0 {
        let temp = b
        let rem = (Int(S[idx].asciiValue! - 48) * temp) % r
        val += rem
        idx -= 1
    }
    print(val % r)
}
*/

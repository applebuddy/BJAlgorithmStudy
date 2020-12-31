
// MARK: - 럭키 스트레이트 18406

// MARK: swift 문제풀이

let S = readLine()!
let len = S.count
var N = Int(S)!
var idx = 0
var left = 0, right = 0
while N > 0 {
    let num = N % 10
    N /= 10
    if idx < len / 2 {
        left += num
    } else {
        right += num
    }
    idx += 1
}

print(left == right ? "LUCKY" : "READY")

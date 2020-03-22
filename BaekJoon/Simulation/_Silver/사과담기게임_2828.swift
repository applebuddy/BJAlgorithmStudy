
// MARK: - 사과담기게임 2828
// MARK: swift 문제풀이

/*
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], M = arr[1]
let K = Int(readLine()!)!
var pos = 1
var dist = 0
for _ in 0..<K {
    let p = Int(readLine()!)!
    if p < pos {
        var move = pos - p
        move = move > 0 ? move : 0
        dist += move
        pos -= move
    } else {
        var move = p - pos - (M-1)
        move = move > 0 ? move : 0
        dist += move
        pos += move
    }
}

print(dist)
*/

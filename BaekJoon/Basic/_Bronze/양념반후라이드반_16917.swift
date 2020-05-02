
// MARK: - 양념 반 후라이드 반 16917
// MARK: swift 문제풀이

/*
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let A = arr[0], B = arr[1], C = arr[2]
var X = arr[3], Y = arr[4]
var isSft = false
if X > Y { swap(&X, &Y); isSft = true }
let tp = isSft ? A : B

Y -= X
let cnt = X
let comP = cnt * (A + B) > cnt * 2 * C ? cnt * 2 * C : cnt * (A + B)
let comP2 = Y * 2 * C > Y * tp ? Y * tp : Y * 2 * C

print(comP + comP2)
*/


// MARK: - 명장 남정훈 15734
// MARK: Implementation swift 문제풀이

/*
let arr = readLine()!.split(separator: " ").map { Int($0)! }
var L = arr[0], R = arr[1], A = arr[2]

if L < R { swap(&L, &R) }

var diff = L - R
var fill = diff < A ? diff : A
A -= fill
R += fill
print(min((L + A / 2) * 2, (R + A / 2) * 2))
*/

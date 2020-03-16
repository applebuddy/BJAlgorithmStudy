
// MARK: - 타일장식물 13301
// MARK: DP swift 문제풀이

/*
import Foundation

var prev = 1, pprev = 1
let N = Int(readLine()!)!
if N == 1 { print(4); exit(0) }
else if N == 2 { print(6); exit(0) }
var last = 0

for _ in 3...N {
    last = prev + pprev
    pprev = prev
    prev = last
}

print((pprev + prev * 2) * 2)
*/

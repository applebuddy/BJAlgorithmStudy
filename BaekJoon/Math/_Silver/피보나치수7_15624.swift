
// MARK: - 피보나치 수 7 15624
// MARK: math swift 문제풀이

/*
import Foundation

let N = Int(readLine()!)!
var prev = 1, pprev = 1
if N == 0 { print(0); exit(0) }
else if N <= 2 { print(1); exit(0) }

var now = 0
for _ in 3...N {
    now = prev + pprev
    now %= 1000000007
    pprev = prev
    prev = now
}

print(now)
*/

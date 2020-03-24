
// MARK: - 크면서 작은 수 2992
// MARK: Math swift 문제풀이

/*
import Foundation

let N = Int(readLine()!)!
var K = N + 1
var Ans = 0

if N <= 11 { print(0); exit(0) }
var tmp = N
var prev = 0
var can = false
while tmp > 0 {
    if tmp % 10 < prev { can = true; break }
    prev = tmp % 10
    tmp /= 10
}

if !can { print(0); exit(0) }

while true {
    var C = [Int](repeating: 0, count: 10)
    var num = N, k = K
    var good = true
    while num > 0 {
        C[num % 10] += 1
        num /= 10
    }
    while k > 0 {
        if C[k % 10] == 0 { good = false; break }
        C[k % 10] -= 1
        k /= 10
    }

    for i in C.indices { if C[i] != 0 { good = false; break } }

    if good { break }
    K += 1
}

print(K)
*/


// MARK: - 소수의자격 6219
// MARK: math swift 문제풀이

/*
import Foundation

let arr = readLine()!.split(separator: " ").map { Int($0)! }
let A = arr[0], B = arr[1], D = arr[2]
let MAX = B+1
var Ans = 0
var P = [Bool](repeating: true, count: MAX+1)


var i = 2, j = i+i
while i * i <= MAX {
    if P[i] == true {
        j = i+i
        while j <= MAX {
            P[j] = false
            j += i
        }
    }
    i += 1
}

for i in A...B {
    if i <= 1 { continue }
    if P[i] == true {
        if String(i).contains(String(D)) { Ans += 1 }
    }
}

print(Ans)
*/


// MARK: - 조합 0의 개수 2004
// MARK: swift 실패답안

/*
import Foundation

let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], M = arr[1]
if M == 0 { print(0); exit(0) }
var nV = 0, pV = 0, nV2 = 0, pV2 = 0
var fv = 5, tw = 2

while fv <= M {
    nV += M / fv
    fv *= 5
}

while tw <= M {
    nV2 += M / tw
    tw *= 2
}

fv = 5
while fv <= N {
    pV += N / fv
    fv *= 5
}

tw = 2
while tw <= N {
    pV2 += N / tw
    tw *= 2
}

fv = 5
while fv <= (N-M) {
    pV -= (N-M) / fv
    fv *= 5
}

tw = 2
while tw <= (N-M) {
    pV2 -= (N-M) / tw
    tw *= 2
}

print(min(pV,pV2) - min(nV, nV2))
*/

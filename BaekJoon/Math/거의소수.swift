
/*
import Foundation

let arr = readLine()!.split(separator: " ").map { Int($0)! }
let A = arr[0], B = arr[1]
let MAX = 10000000
var Prime = [Bool](repeating: true, count: MAX+1)
var dic = [Int:Int]()
var PV = [Int]()
var Ans = 0

var i = 2, j = i+i
while i*i <= MAX {
    if Prime[i] == true {
        while j <= MAX {
            Prime[j] = false
            j += i
        }
    }
    i += 1
}

for i in 2...MAX {
    if Prime[i] == true { PV.append(i) }
}

var idx = 0
let len = PV.count
while idx < len && PV[idx] <= MAX {
    var val = PV[idx]
    let mul = val
    val *= mul
    while val <= B {
        if val >= A && dic[val] == nil {
            print(val)
            dic[val] = 1
            Ans += 1
        }
        val *= mul
    }
    idx += 1
}

print(Ans)
*/

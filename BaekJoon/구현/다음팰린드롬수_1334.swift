
// MARK: swift 실패답안 기록

/*
import Foundation

var arr = Array(readLine()!).map { Int(String($0))! }
var len = arr.count

if len == 1 && arr[0] <= 8 { print(arr[0]+1); exit(0) }

func plusVal(_ val: Int) {
    var idx = len - 1
    var rem = 0
    while idx >= 0 {
        arr[idx] = (arr[idx] + val + rem) % 10
        rem = (arr[idx] + val + rem) / 10
        if arr[idx] > 0 { break }
        idx -= 1
    }
    if idx < 0 { arr.insert(1, at: 0) }
}

plusVal(1)
if arr == Array(arr.reversed()) { print(arr.map { String($0) }.joined()); exit(0) }
len = arr.count

var S = arr.map { String($0) }.joined()

if len & 1 == 0 {
    var rS = arr[0..<len/2]
    rS.append(contentsOf: arr[0..<len/2].reversed())
    let compS = rS.map { String($0) }.joined()
    if compS > S { print(compS) }
    else {
        var idx = len/2
        while true {
            rS[idx] += 1
            rS[len-idx-1] = rS[idx]
            if rS[idx] != 0 { break }
            idx -= 1
            if(idx < 0) {
                rS.insert(1, at: 0)
                rS.append(1)
                break
            }
        }
        print(rS.map { String($0) }.joined())
    }
} else {
    var rS = arr[0..<len/2]
    rS.append(arr[len/2])
    rS.append(contentsOf: arr[0..<len/2].reversed())
    let compS = rS.map { String($0) }.joined()
    if compS > S { print(compS) }
    else {
        var idx = len/2
        while true {
            rS[idx] += 1
            rS[len-idx-1] = rS[idx]
            if rS[idx] != 0 { break }
            idx -= 1
            if(idx < 0) {
                rS.insert(1, at: 0)
                rS.append(1)
                break
            }
        }
        print(rS.map { String($0) }.joined())
    }
}
*/

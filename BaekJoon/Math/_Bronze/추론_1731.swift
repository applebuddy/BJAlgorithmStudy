
// MARK: - 추론 1731

// MARK: Math swift 문제풀이

let ip = { Int(readLine()!)! }
let N = ip()
var mnV = -Int.max
var rm = 0, prev = mnV, diff = mnV
var isDB = mnV
var num = 0
(0 ..< N).forEach { idx in
    num = ip()

    if prev == mnV {
        prev = num
    } else {
        if diff == mnV {
            diff = num - prev
        } else if diff != num - prev {
            isDB = 1
            rm = diff / (num - prev)
        } else {
            isDB = 0
        }
    }

    if idx < N - 1 {
        prev = num
    }
    return
}

print(isDB == 0 ? num + diff : Int(Float(num) * (Float(num) / Float(prev))))


// MARK: - 거리의 합 2399

let ip: (() -> [Int]) = {
    let S = readLine()!
    var result = [Int]()
    var temp = 0
    S.forEach {
        if $0 == " " {
            result.append(temp)
            temp = 0
            return
        }
        temp = temp * 10 + Int($0.unicodeScalars.first!.value) - 48
    }
    result.append(temp)
    return result
}

func absValue(_ tp: (Int, Int)) -> Int {
    let result = tp.0 - tp.1
    return result < 0 ? result * -1 : result
}

let N = Int(readLine()!)!
let arr = ip()

var idx = 0
var jdx = 1
var answer = 0
while idx < arr.count - 1 {
    jdx = idx + 1
    while jdx < arr.count {
        answer += absValue((arr[idx], arr[jdx]))
        jdx += 1
    }
    idx += 1
}

print(answer * 2)

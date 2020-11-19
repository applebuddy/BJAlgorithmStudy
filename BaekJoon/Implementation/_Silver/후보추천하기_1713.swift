
// MARK: - 후보추천하기 1713

// MARK: Implementation swift 문제풀이

let ip = { Int(readLine()!)! }
let ipList: (() -> [Int]) = {
    let S = readLine()!
    var temp = 0
    var result: [Int] = []
    S.forEach { num in
        if num == " " {
            result.append(temp)
            temp = 0
            return
        }
        temp = temp * 10 + Int(num.asciiValue!) - 48
    }
    result.append(temp)
    return result
}

let K = ip()
let N = ip()
let arr = ipList()
var dic = [Int: Int]()
var list = [Int]()

arr.forEach { pick in
    if dic[pick] == nil, list.count == K {
        var mnPick = 0
        var mxValue = Int.max
        list.forEach { value in
            let dicValue = dic[value]!
            if dicValue < mxValue {
                mnPick = value
                mxValue = dicValue
            }
        }
        list = list.filter { $0 != mnPick }
        dic[mnPick] = nil
    }

    if dic[pick] == nil {
        list.append(pick)
    }
    dic[pick] = (dic[pick] ?? 0) + 1
}

print(list.sorted().map { "\($0)" }.joined(separator: " "))

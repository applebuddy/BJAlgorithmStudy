
// MARK: - 구간 합 구하기 4 11659

// MARK: swift 문제풀이

let ip: (() -> [Int]) = {
    let S = readLine()!
    var tmp = 0
    var result: [Int] = []
    S.forEach {
        if $0 == " " {
            result.append(tmp)
            tmp = 0
            return
        }
        tmp = tmp * 10 + Int($0.unicodeScalars.first!.value) - 48
    }
    result.append(tmp)
    return result
}

let arr = ip()
let N = arr[0], K = arr[1]
var IV = ip()
var SV = [Int](repeating: 0, count: IV.count)
for idx in IV.indices {
    SV[idx] += idx > 0 ? SV[idx - 1] + IV[idx] : IV[idx]
}

(0 ..< K).forEach { _ in
    let arr2 = ip()
    let from = arr2[0] - 1, to = arr2[1] - 1
    print(SV[to] - (from > 0 ? SV[from - 1] : 0))
}

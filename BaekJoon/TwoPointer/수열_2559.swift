
// MARK: - 수열 2559

let ip: (() -> [Int]) = {
    let S = readLine()!
    var tmp = 0
    var positive = true
    var result: [Int] = []
    S.forEach {
        if $0 == " " {
            tmp *= positive ? 1 : -1
            result.append(tmp)
            positive = true
            tmp = 0
            return
        }

        if $0 == "-" {
            positive = false
            return
        }

        tmp = tmp * 10 + Int($0.unicodeScalars.first!.value) - 48
    }
    tmp *= positive ? 1 : -1
    result.append(tmp)
    return result
}

let arr = ip()
let K = arr[1]
let G = ip()
var cnt = 0, sum = 0
var mx = Int.min

for idx in G.indices {
    cnt += 1
    sum += G[idx]
    if cnt >= K {
        if idx - K >= 0 {
            sum -= G[idx - K]
        }
        mx = sum > mx ? sum : mx
    }
}

print(mx)

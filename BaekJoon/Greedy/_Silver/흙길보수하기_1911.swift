
// MARK: - 흙길 보수하기 1911
// MARK: Greedy swift 문제풀이

/*
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], L = arr[1]
var HV = [(Int,Int)]()
for _ in 0..<N {
    let arr2 = readLine()!.split(separator: " ").map { Int($0)! }
    HV.append((arr2[0], arr2[1]-1))
}

HV.sort { $0.0 < $1.0 || ($0.0 == $1.0 && $0.1 < $1.1) }
var now = HV.first!.0
var Ans = 0
for i in HV.indices {
    if now > HV[i].1 { continue }
    if now <= HV[i].0 { now = HV[i].0 }
    let need = (HV[i].1 - now) / L + 1
    Ans += need
    now += need * L
}

print(Ans)
*/

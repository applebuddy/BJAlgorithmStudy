
// MARK: - 신입사원 1946

// MARK: Greedy swift 문제풀이

let T = Int(readLine()!)!
for _ in 0 ..< T {
    let N = Int(readLine()!)!
    var PV = [(Int, Int)]()
    for _ in 0 ..< N {
        let ar = readLine()!.split(separator: " ").map { Int(String($0))! }
        PV.append((ar[0], ar[1]))
    }

    PV.sort { $0.0 < $1.0 }
    var stand = N
    var Ans = 1
    for idx in 1 ..< PV.count {
        if stand > PV[idx - 1].1 { stand = PV[idx - 1].1 }
        if stand > PV[idx].1 { Ans += 1 }
    }
    print(Ans)
}

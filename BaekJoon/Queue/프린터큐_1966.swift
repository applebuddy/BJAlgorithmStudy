
// MARK: - 프린터큐 1966

// MARK: Queue swift 문제풀이

let T = Int(readLine()!)!
(0 ..< T).forEach { _ in
    let ip = readLine()!.split(separator: " ").last!
    let pos = Int(ip)!
    var G = readLine()!.split(separator: " ").map { Int(String($0))! }
    let PV = G.sorted(by: >)
    var pdx = 0
    var qdx = 0
    var cnt = 0
    while pdx < PV.count {
        if G[qdx] == PV[pdx] {
            cnt += 1
            if qdx == pos {
                print(cnt)
                break
            }
            G[qdx] = -1
            pdx += 1
        }
        qdx = (qdx + 1) % G.count
    }
}

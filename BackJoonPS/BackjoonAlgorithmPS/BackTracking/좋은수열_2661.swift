
// MARK: - 좋은수열 2661

// MARK: Backtracking swift 문제풀이

let N = Int(readLine()!)!
var G = [Int]()
var finished = false

func isGoodSeq() -> Bool {
    if G.count <= 1 { return true }
    let mx = G.count - 1
    var idx = mx - 1
    while idx >= 0 {
        defer { idx -= 1 }
        if G[idx] == G[mx] {
            let len = mx - idx
            if idx - len + 1 < 0 { continue }
            if G[idx-len+1 ... idx] == G[idx+1 ..< idx+1+len] {
                return false
            }
        }
    }
    
    return true
}

func goodSequence() {
    if N <= G.count {
        print(G.compactMap { "\($0)" }.joined() )
        finished = true
        return
    }
    
    for value in 1...3 {
        if !G.isEmpty && G.last! == value { continue }
        G.append(value)
        if isGoodSeq() {
            goodSequence()
            if finished { return }
        }
        
        G.removeLast()
    }
}

goodSequence()

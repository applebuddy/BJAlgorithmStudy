
// MARK: - 맥주마시면서걸어가기 9205

// MARK: BFS swift 문제풀이

let T = Int(readLine()!)!
let ip: (() -> (Int, Int)) = {
  let input = readLine()!.split(separator: " ").map { Int(String($0))! }
  return (input[0], input[1])
}

func absValue(_ x: Int, _ y: Int) -> Int {
  let diff = x - y
  return diff < 0 ? -1 * diff : diff
}

var dic: [String: Bool] = [:]
func BFS(_ start: (Int, Int),
         _ G: inout [(Int, Int)],
         _ dest: (Int, Int)) -> Bool {
  var Q: [(Int, Int)] = [(start.0, start.1)]
  var cur = 0
  while cur < Q.count {
    let node = Q[cur]
    cur += 1
    var idx = 0
    while idx < G.count {
      let next = G[idx]
      let diff = absValue(node.0, next.0) + absValue(node.1, next.1)
      if diff > 1000 { idx += 1; continue }
      if next.0 == dest.0 && next.1 == dest.1 { return true }
      G.remove(at: idx)
      Q.append(next)
    }
  }
  return false
}

func solve() {
  let N = Int(readLine()!)!
  var G: [(Int, Int)] = []
  G.append(ip())
  (0..<N).forEach { _ in
    G.append(ip())
  }
  G.append(ip())
  print(BFS((G.first!.0, G.first!.1), &G, (G.last!.0, G.last!.1)) ? "happy" : "sad")
}

(0..<T).forEach { _ in
  solve()
}

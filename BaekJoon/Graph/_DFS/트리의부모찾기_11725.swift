
// MARK: - 트리의부모찾기 11725

// MARK: DFS swift 문제풀이

let ip: (() -> [Int]) = {
  let S = readLine()!
  var temp = 0
  var result: [Int] = []
  S.forEach {
    if $0 == " " { result.append(temp); temp = 0; return }
    temp = temp * 10 + Int($0.unicodeScalars.first!.value) - 48
  }
  result.append(temp)
  return result
}

let N = Int(readLine()!)!
var G = [[Int]](repeating: [Int](), count: N+1)
var Chk = [Int](repeating: 0, count: N+1)

(0..<N-1).forEach { _ in
  let input = ip()
  G[input[0]].append(input[1])
  G[input[1]].append(input[0])
}

func DFS(_ node: Int) {
  G[node].forEach { next in
    if Chk[next] != 0 { return }
    Chk[next] = node
    DFS(next)
  }
}

DFS(1)
print(Chk[2...].map { "\($0)" }.joined(separator: "\n"))


// MARK: - 최소스패닝트리 1197
// MARK: MST swift 문제풀이

/*
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let V = arr[0], E = arr[1]
var PV = [(Int,Int,Int)]()
for _ in 0..<E {
  let a2 = readLine()!.split(separator: " ").map { Int($0)! }
  PV.append((a2[0],a2[1],a2[2]))
}

PV.sort { $0.2 < $1.2 }

var Parent = [Int](0...V)

func getParent(_ N: Int) -> Int {
  if Parent[N] == N { return N }
  return getParent(Parent[N])
}
func mergeParent(_ A: Int, _ B: Int) {
  let a = getParent(A)
  let b = getParent(B)
  if a > b { Parent[a] = b }
  else { Parent[b] = a }
}

var idx = 0, cnt = 0, Ans = 0
while idx < E {
  let node = PV[idx]
  let from = getParent(node.0), to = getParent(node.1)
  if from != to {
    mergeParent(from, to)
    Ans += node.2
    cnt += 1
    if cnt == E-1 { break }
  }
  idx += 1
}

print(Ans)
*/



// MARK: - 그리고 하나가 남았다 3895
// MARK: Simulation swift 문제풀이

/*
while true {
  let arr = readLine()!.split(separator: " ").map { Int($0)! }
  if arr[0] == 0 && arr[1]==0 && arr[2]==0 { break }
  let K = arr[1]
  let N = arr[0]
  if N == 1 { print(1); continue }
  var M = arr[2]-1
  var G = [Int](1...N)

  G.remove(at: M)
  M -= 1
  if G.count == 1 { print(G[0]); continue }
  if M < 0 { M = G.count-1 }
  while true {
    M += K
    M %= G.count
    G.remove(at: M)
    M -= 1
    if M < 0 { M = G.count-1 }
    if G.count == 1 { break }
  }

  print(G[0])
}
*/


// MARK: - 준오는 조류혐오야!! 14647
// MARK: swift 문제풀이

/*

let arr = readLine()!.split(separator: " ").map { Int($0)! }

let N = arr[0], M = arr[1]

var G = [[Int]](repeating: [Int](), count: N)

for i in 0..<N {
  G[i] = readLine()!.split(separator: " ").map { Int($0)! }
}

for i in G.indices {
  for j in G[i].indices {
    var cnt = 0
    while G[i][j] > 0 {
      if G[i][j] % 10 == 9 { cnt += 1 }
      G[i][j] /= 10
    }
    G[i][j] = cnt
  }
}

var Ans = 0
var ssum = 0
for i in G.indices {
  let sum = G[i].reduce(0,+)
  ssum += sum
  Ans = Ans < sum ? sum : Ans
}

for j in 0..<M {
  var sum = 0
  for i in 0..<N {
    sum += G[i][j]
  }
  Ans = Ans < sum ? sum : Ans
}

print(ssum - Ans)

*/

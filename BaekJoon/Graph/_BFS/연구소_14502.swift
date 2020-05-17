

// MARK: - 연구소 14502
// MARK: 커서큐 활용 풀이

/*
typealias PV = [(Int,Int)]
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], M = arr[1]
var G = [[Int]](repeating: [Int](), count: N)
var Q: PV = []
var pos: PV = [(-1,0), (1,0), (0,-1), (0,1)]
var Ans = 0

for i in 0..<N {
  G[i] = readLine()!.split(separator: " ").map { Int($0)! }
}

var safeArea: PV = []
var Cnt = 0

for i in G.indices {
  for j in G[i].indices {
    if G[i][j] == 0 {
      Cnt += 1
      safeArea.append((i,j))
    } else if G[i][j] == 2 { Q.append((i,j)) }
  }
}

let sLen = safeArea.count
Cnt -= 3

// MARK: - 커서큐 방식의 BFS 코드 예시)
func BFS(_ Q: inout PV, _ tG: inout [[Int]], _ tCnt: inout Int) -> Int {
    // 커서 위치를 활용해서 큐와 유사한 효과를 낼 수 있습니다.
  var cur = 0
    
  // cur가 Q.count 범위 밖을 나가는 것은 큐가 비었음을 의미합니다.
  while cur < Q.count {
    let x = Q[cur].0
    let y = Q[cur].1
    cur += 1 // 큐를 한번 pop한 것을 표현합니다. 배열큐와 달리 커서큐의 pop() 시간복잡도는 1입니다.
    for i in pos.indices {
      let nx = x + pos[i].0
      let ny = y + pos[i].1
      if nx < 0 || ny < 0 || nx >= N || ny >= M { continue }
      if tG[nx][ny] != 0 { continue }
      tG[nx][ny] = 2
      Q.append((nx,ny))
      tCnt -= 1
      if tCnt == 0 { return 0 }
    }
  }
  return tCnt
}

for i in 0..<sLen-2 {
  for j in i+1..<sLen-1 {
    for k in j+1..<sLen {
      var tG = G
      var tQ = Q
      var tCnt = Cnt
      tG[safeArea[i].0][safeArea[i].1] = 1
      tG[safeArea[j].0][safeArea[j].1] = 1
      tG[safeArea[k].0][safeArea[k].1] = 1
      let safeCnt = BFS(&tQ, &tG, &tCnt)
      Ans = Ans < safeCnt ? safeCnt : Ans
    }
  }
}

print(Ans)
*/

// MARK: BFS swift 문제풀이

/*
typealias PV = [(Int,Int)]
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], M = arr[1]
var G = [[Int]](repeating: [Int](), count: N)
var Q: PV = []
var pos: PV = [(-1,0), (1,0), (0,-1), (0,1)]
var Ans = 0

for i in 0..<N {
  G[i] = readLine()!.split(separator: " ").map { Int($0)! }
}

var safeArea: PV = []
var Cnt = 0

for i in G.indices {
  for j in G[i].indices {
    if G[i][j] == 0 {
      Cnt += 1
      safeArea.append((i,j))
    } else if G[i][j] == 2 { Q.append((i,j)) }
  }
}

let sLen = safeArea.count
Cnt -= 3

// MARK: - 배열큐 방식의 BFS 코드 예시)
func BFS(_ Q: inout PV, _ tG: inout [[Int]], _ tCnt: inout Int) -> Int {
  while !Q.isEmpty {
    let x = Q.first!.0
    let y = Q.first!.1
    // 배열큐 방식의 pop()과 같은 removeFirst()의 시간복잡도는 N입니다.
    Q.removeFirst()
    for i in pos.indices {
      let nx = x + pos[i].0
      let ny = y + pos[i].1
      if nx < 0 || ny < 0 || nx >= N || ny >= M { continue }
      if tG[nx][ny] != 0 { continue }
      tG[nx][ny] = 2
      Q.append((nx,ny))
      tCnt -= 1
      if tCnt == 0 { return 0 }
    }
  }
  return tCnt
}

for i in 0..<sLen-2 {
  for j in i+1..<sLen-1 {
    for k in j+1..<sLen {
      var tG = G
      var tQ = Q
      var tCnt = Cnt
      tG[safeArea[i].0][safeArea[i].1] = 1
      tG[safeArea[j].0][safeArea[j].1] = 1
      tG[safeArea[k].0][safeArea[k].1] = 1
      let safeCnt = BFS(&tQ, &tG, &tCnt)
      Ans = Ans < safeCnt ? safeCnt : Ans
    }
  }
}

print(Ans)
*/

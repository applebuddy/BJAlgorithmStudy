
// MARK: - 미세먼지 안녕! 17144
// MARK: Simulation swift 문제풀이

/*
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let R = arr[0], C = arr[1], T = arr[2]
var G = [[Int]](repeating: [Int](), count: R)
var cdx = [-1, -1]
let dx = [-1,1,0,0]
let dy = [0,0,-1,1]

for i in 0..<R {
  G[i] = readLine()!.split(separator: " ").map { Int($0)! }
  if G[i].first! == -1 && cdx[0] == -1 {
    cdx[0] = i
    cdx[1] = i+1
  }
}

func spread(_ i: Int, _ j: Int, _ tG: inout [[Int]]) {
    var cnt = 0
    for k in 0..<4 {
      let nx = i + dx[k]
      let ny = j + dy[k]
      if nx < 0 || ny < 0 || nx >= R || ny >= C { continue }
      if G[nx][ny] == -1 { continue }
      cnt += 1
    }

    let moveVal = G[i][j]/5
    for k in 0..<4 {
      let nx = i + dx[k]
      let ny = j + dy[k]
      if nx < 0 || ny < 0 || nx >= R || ny >= C { continue }
      if G[nx][ny] == -1 { continue }
      tG[i][j] -= moveVal
      tG[nx][ny] += moveVal
    }
}

let ub = [(0,1), (-1,0), (0,-1), (1,0)]
let db = [(0,1), (1,0), (0,-1), (-1,0)]

func blow(_ u: Int, _ d: Int, _ tG: inout [[Int]]) {
    var udx = u, udy = 0
    var ddx = d, ddy = 0
    var ttG = tG
    var i = 0
    while !(i==3 && ttG[udx][udy] == -1) && i < 4 {
        let nx = udx + ub[i].0
        let ny = udy + ub[i].1
        if nx < 0 || ny < 0 || nx >= R || ny >= C { i += 1; continue }
        if i==3 && ttG[nx][ny] == -1 { break }
        ttG[nx][ny] = tG[udx][udy] == -1 ? 0 : tG[udx][udy]
        udx = nx
        udy = ny
    }

    i = 0
    while !(i==3 && ttG[ddx][ddy] == -1) && i < 4 {
        let nx = ddx + db[i].0
        let ny = ddy + db[i].1
        if nx < 0 || ny < 0 || nx >= R || ny >= C { i += 1; continue }
        if i==3 && ttG[nx][ny] == -1 { break }
        ttG[nx][ny] = tG[ddx][ddy] == -1 ? 0 : tG[ddx][ddy]
        ddx = nx
        ddy = ny
    }
    tG = ttG
}

var time = 0
while true {
  var tG = G
  for i in G.indices {
    for j in G[i].indices {
      spread(i,j, &tG)
    }
  }

  blow(cdx[0], cdx[1], &tG)
  time += 1
  G = tG
  
  if T == time { break }
}

var Ans = 0
for i in G.indices {
  for j in G[i].indices {
    Ans += G[i][j] == -1 ? 0 : G[i][j]
  }
}

print(Ans)
*/

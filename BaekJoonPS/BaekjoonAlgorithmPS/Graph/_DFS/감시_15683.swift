//
//  감시_15683.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/01/31.
//  Copyright © 2021 MungGu. All rights reserved.
//

// MARK: - 감시 15683
// MARK: DFS 완전탐색 문제풀이

/*
let ip: (() -> [Int]) = {
  let S = readLine()!
  var result: [Int] = []
  S.forEach {
    if $0 == " " { return }
    result.append(Int($0.unicodeScalars.first!.value) - 48)
  }
  return result
}

typealias Tuple = (Int, Int, Int)
let dx = [-1, 0, 1, 0]
let dy = [0, 1, 0, -1]
let arr = ip()
let (N, M) = (arr[0], arr[1])
var G: [[Int]] = []
var cctvList: [Tuple] = []
var zeroCnt: Int = 0

(0..<N).forEach { _ in
  G.append(ip())
}

for idx in G.indices {
  for jdx in G[idx].indices {
    if G[idx][jdx] >= 1 && G[idx][jdx] <= 5 {
      cctvList.append((G[idx][jdx], idx, jdx))
    } else if G[idx][jdx] == 0 {
      zeroCnt += 1
    }
  }
}

func coverZeroOneline(_ tmpG: inout [[Int]], _ pos: (Int, Int), _ dir: Int) -> Int {
  var posX = pos.0 + dx[dir]
  var posY = pos.1 + dy[dir]
  var coverCnt = 0
  while posX >= 0 && posY >= 0 && posX < N && posY < M
        && tmpG[posX][posY] != 6 {
        if tmpG[posX][posY] == 0 {
          tmpG[posX][posY] = -1
          coverCnt += 1
        }
        posX += dx[dir]
        posY += dy[dir]
  }
  return coverCnt
}

func runCCTV(_ cctvNum: Int, _ pos: (Int, Int), _ dir: Int, _ tmpG: inout [[Int]]) -> Int {
  var coverTotCnt = 0
  if cctvNum == 1 {
    coverTotCnt += coverZeroOneline(&tmpG, pos, dir)
  } else if cctvNum == 2 {
    [0, 2].forEach { dirCnt in
      coverTotCnt += coverZeroOneline(&tmpG, pos, (dir + dirCnt) % 4)
    }
  } else if cctvNum == 3 {
    (0...1).forEach { dirCnt in
      coverTotCnt += coverZeroOneline(&tmpG, pos, (dir + dirCnt) % 4)
    }
  } else if cctvNum == 4 {
    (0...2).forEach { dirCnt in
      coverTotCnt += coverZeroOneline(&tmpG, pos, (dir + dirCnt) % 4)
    }
  } else if cctvNum == 5 {
    (0...3).forEach { dirCnt in
      coverTotCnt += coverZeroOneline(&tmpG, pos, (dir + dirCnt) % 4)
    }
  }
  return coverTotCnt
}

var Ans = Int.max
func DFS(_ cctvIdx: Int, _ coverCnt: Int, _ tmpG: [[Int]]) {
  if cctvIdx >= cctvList.count {
    let blindSpotCnt = zeroCnt - coverCnt
    Ans = Ans > blindSpotCnt ? blindSpotCnt : Ans
    return
  }

  var nowG = tmpG
  let nowCCTV = cctvList[cctvIdx]
  for dir in (0..<4) {
    let cctvNum = nowCCTV.0
    let cctvPos = (nowCCTV.1, nowCCTV.2)
    let nowCoverCnt = runCCTV(cctvNum, cctvPos, dir, &nowG)
    DFS(cctvIdx + 1, coverCnt + nowCoverCnt, nowG)
    nowG = tmpG
  }
}

DFS(0, 0, G)
print(Ans)
*/

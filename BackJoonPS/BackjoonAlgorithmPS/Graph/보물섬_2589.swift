//
//  보물섬_2589.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/08/24.
//  Copyright © 2021 MungGu. All rights reserved.
//

// MARK: - 보물섬_2589, BFS 문제풀이

/*
let ip: (() -> ([Int])) = {
  let string = readLine()!
  var result: [Int] = []
  var temp = 0
  string.forEach { char in
    if char == " " {
      result.append(temp)
      temp = 0
      return
    }
    temp = temp * 10 + (Int(char.asciiValue!) - 48)
  }
  result.append(temp)
  return result
}

let dx = [0, 0, -1, 1]
let dy = [-1, 1, 0, 0]
let info = ip()
let (H, W) = (info[0], info[1])
var Ans = 0
var G = [[Character]]()

func BFS(_ x: Int, _ y: Int, _ graph: inout [[Character]]) -> Int {
  if graph[x][y] == "W" { return 0 }
  var tG = graph
  var mxDist = 0
  tG[x][y] = "W"
  var Queue: [(x: Int, y: Int, dist: Int)] = [(x, y, 0)]
  var cur = 0
  while cur < Queue.count {
    let node = Queue[cur]
    cur += 1
    for ddx in dx.indices {
      let nx = node.x + dx[ddx]
      let ny = node.y + dy[ddx]
      if nx < 0 || ny < 0 || nx >= H || ny >= W { continue }
      if tG[nx][ny] == "W" { continue }
      tG[nx][ny] = "W"
      mxDist = mxDist < node.dist + 1 ? node.dist + 1 : mxDist
      Queue.append((nx, ny, node.dist + 1))
    }
  }
  return mxDist
}

(0..<H).forEach { _ in
  G.append(Array(readLine()!))
}

for idx in G.indices {
  for jdx in G[idx].indices {
    let dist = BFS(idx, jdx, &G)
    Ans = Ans < dist ? dist : Ans
  }
}

print(Ans)
*/

//
//  빵집_3109.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/09/20.
//  Copyright © 2021 MungGu. All rights reserved.
//

// MARK: - 빵집 3109, DFS 문제풀이

/*
let ip = readLine()!.split(separator: " ").map { Int(String($0))! }
let (R, C) = (ip[0], ip[1])
var G: [[Character]] = []

(0..<R).forEach { _ in
  G.append(Array(readLine()!))
}

typealias Tuple = (x: Int, y: Int)
let dxList = [-1, 0, 1]
let dyList = [1, 1, 1]

func DFS(_ ox: Int, _ oy: Int) -> Bool {
  if oy >= C - 1 { return true }
  for idx in dxList.indices {
    let x = ox + dxList[idx]
    let y = oy + dyList[idx]
    if x < 0 || y < 0 || x >= R || y >= C { continue }
    if G[x][y] == "x" || G[x][y] == "o" { continue }
    G[x][y] = "o"
    if DFS(x, y) {
      return true
    }
  }

  return false
}

print((0..<R).reduce(into: 0) { (answer, idx) in
  guard G[idx][0] == "." else { return }
  G[idx][0] = "o"
  answer += DFS(idx, 0) ? 1 : 0
})
*/

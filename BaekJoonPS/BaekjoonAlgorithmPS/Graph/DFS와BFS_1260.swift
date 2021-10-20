//
//  DFS와BFS_1260.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/08/24.
//  Copyright © 2021 MungGu. All rights reserved.
//

// MARK: - DFS와 BFS 그래프 기초문제 swift 풀이

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

let info = ip()
let (N, M, V) = (info[0], info[1], info[2])
var G = [[Int]](repeating: [], count: N+1)
var C = [Bool](repeating: false, count: N+1)
var answer = ""

func DFS(_ node: Int) {
  answer += "\(node) "
  for idx in G[node].indices {
    let next = G[node][idx]
    if C[next] { continue }
    C[next] = true
    DFS(next)
  }
}

func BFS(_ node: Int) {
  var Queue: [Int] = [node]
  var cur = 0
  C[node] = true
  answer = "\(node)"
  while cur < Queue.count {
    let now = Queue[cur]
    cur += 1
    for idx in G[now].indices {
      let next = G[now][idx]
      if C[next] { continue }
      C[next] = true
      answer += " \(next)"
      Queue.append(next)
    }
  }
}

(0..<M).forEach { _ in
  let info2 = ip()
  let (a, b) = (info2[0], info2[1])
  G[a].append(b)
  G[b].append(a)
}

G = G.map { $0.sorted() }

C[V] = true
DFS(V)
print(answer)
C = [Bool](repeating: false, count: N+1)
answer = ""
BFS(V)
print(answer)
*/

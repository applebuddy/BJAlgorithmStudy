//
//  LCA_11437.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/12/27.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

/*
let ip = { Int(readLine()!)! }
let ip2: (() -> [Int]) = {
  let S = readLine()!
  var tmp = 0
  var result: [Int] = []
  S.forEach {
    if $0 == " " {
      result.append(tmp)
      tmp = 0
      return
    }
    tmp = tmp * 10 + Int($0.asciiValue!) - 48
  }
  result.append(tmp)
  return result
}

let N = ip()
let len = 50001
var pList = [Int](repeating: 0, count: len)
var G = [[Int]](repeating: [Int](), count: len)
(0..<N-1).forEach { _ in
  let com = ip2()
  G[com[0]].append(com[1])
  G[com[1]].append(com[0])
}

func writeParent(_ parent: Int) {
  for idx in G[parent].indices {
    let next = G[parent][idx]
    if pList[next] != 0 { continue }
    pList[next] = parent
    writeParent(next)
  }
}

func LCA(_ first: Int, _ second: Int) -> Int {
  var st = [Bool](repeating: false, count: len)
  var (A, B) = (first, second)
  if A == B { return A }
  st[1] = true
  st[A] = true
  st[B] = true
  while A != 1 {
    let parent = pList[A]
    if parent == 1 { break }
    if st[parent] { return parent }
    st[parent] = true
    A = parent
  }

  while B != 1 {
    let parent = pList[B]
    if parent == 1 { break }
    if st[parent] { return parent }
    st[parent] = true
    B = parent
  }

  return 1
}

pList[1] = 1
writeParent(1)

let M = ip()
(0..<M).forEach { _ in
  let quest = ip2()
  print(LCA(quest[0], quest[1]))
}
*/

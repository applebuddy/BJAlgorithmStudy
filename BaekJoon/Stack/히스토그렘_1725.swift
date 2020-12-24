//
//  히스토그렘_1725.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/12/24.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 히스토그램 1725

/*
let ip: (() -> Int) = {
  let S = readLine()!
  var result = 0
  S.forEach {
    result = result * 10 + Int($0.unicodeScalars.first!.value) - 48
  }
  return result
}

let N = ip()
var G = [Int]()
var STK = [Int]()
var dic = [Int](repeating: 0, count: 100001)
(0..<N).forEach { _ in
  G.append(ip())
}

func getDim(_ bWidth: Int) -> Int {
  let last = STK.removeLast()
  var width = bWidth
  if !STK.isEmpty { width -= STK.last! + 1 }
  let dim = dic[last] * width
  return dim
}

var mx = 0
for idx in G.indices {
  dic[idx] = G[idx]
  while !STK.isEmpty && dic[STK.last!] > dic[idx] {
    let dim = getDim(idx)
    mx = mx < dim ? dim : mx
  }
  STK.append(idx)
}

while !STK.isEmpty {
  let dim = getDim(G.count)
  mx = mx < dim ? dim : mx
}

print(mx)
*/

//
//  수도쿠_2239.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/12/26.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

/*
import Foundation

let ip: (() -> [Int]) = {
  return Array(readLine()!).map { Int($0.asciiValue!) - 48 }
}

var sqDic = [[[Bool]]](repeating: [[Bool]](repeating: [Bool](repeating: false, count: 10), count: 3), count: 3)
var colDic = [[Bool]](repeating: [Bool](repeating: false, count: 10), count: 10)
var rowDic = colDic
var G = [[Int]]()
var fList = [(Int, Int)]()
(0..<9).forEach { _ in
  G.append(ip())
}

for idx in G.indices {
  for jdx in G[idx].indices {
    if G[idx][jdx] == 0 {
      fList.append((idx, jdx))
    } else {
      rowDic[idx][G[idx][jdx]] = true
      colDic[jdx][G[idx][jdx]] = true
      sqDic[idx/3][jdx/3][G[idx][jdx]] = true
    }
  }
}

func DFS(_ idx: Int) {
  if idx >= fList.count {
    G.forEach {
      print($0.reduce(into: 0) { $0 = $0 * 10 + $1 })
    }
    exit(0)
  }
  let x = fList[idx].0
  let y = fList[idx].1
  for num in 1...9 {
    if sqDic[x/3][y/3][num] || rowDic[x][num] || colDic[y][num] {
      continue
    }
    sqDic[x/3][y/3][num] = true
    rowDic[x][num] = true
    colDic[y][num] = true
    G[x][y] = num
    DFS(idx+1)
    G[x][y] = 0
    sqDic[x/3][y/3][num] = false
    rowDic[x][num] = false
    colDic[y][num] = false
  }
}

DFS(0)
*/

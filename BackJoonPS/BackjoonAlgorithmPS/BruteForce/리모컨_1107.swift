//
//  리모컨_1107.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/01/04.
//  Copyright © 2021 MungGu. All rights reserved.
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
let M = ip()
var FL: [Int] = []
if M > 0 {
  FL = ip2()
}

var Chk = [Bool](repeating: true, count: 10)
var list: [Int] = []
FL.forEach { Chk[$0] = false }
Chk.enumerated().forEach { (idx, value) in
  if value {
    list.append(idx)
  }
}

func diffValue(_ a: Int, _ b: Int) -> Int {
  return a > b ? a - b : b - a
}

var mnDiff = diffValue(100, N)
var tot = 0
func DFS(_ cnt: Int) {
  let newDiff = diffValue(tot, N) + cnt
  if cnt > 6 { return }
  if cnt > 0 {
    mnDiff = newDiff < mnDiff ? newDiff : mnDiff
  }

  for next in list {
    tot = tot * 10 + next
    DFS(cnt+1)
    tot /= 10
  }
}

DFS(0)
print(mnDiff)
*/

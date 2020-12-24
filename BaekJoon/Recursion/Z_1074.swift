//
//  Z_1074.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/12/25.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

/*
import Foundation

let ip: (() -> [Int]) = {
  let S = readLine()!
  var tmp = 0
  var result: [Int] = []
  S.forEach {
    if $0 == " " {
      result.append(tmp)
      tmp = 0
      return
    }
    tmp = tmp * 10 + Int($0.unicodeScalars.first!.value) - 48
  }
  result.append(tmp)
  return result
}

extension Int {
  func pow(_ k: Int) -> Int {
    var k = k
    var flag = self
    var result = 1
    while k > 0 {
      if k % 2 == 0 {
        flag *= flag
        k /= 2
      } else {
        result *= flag
        k -= 1
      }
    }
    return result
  }
}

let list = ip()
let (N, R, C) = (list[0], list[1], list[2])
let len = 2.pow(N)
var G = [[Bool]](repeating: [Bool](repeating: false, count: len), count: len)

typealias Pair = (Int, Int)
let dx = [0, 0, 1, 1]
let dy = [0, 1, 0, 1]
var cnt = 0

func isRange(_ now: Pair, _ range: (Pair, Pair)) -> Bool {
  if now.0 < range.0.0 || now.0 >= range.1.0
    || now.1 < range.0.1 || now.1 >= range.1.1 {
      return false
    }
  return true
}

func DFS(_ start: Pair, _ width: Int) {
  if width <= 2 {
    for idx in dx.indices {
      let x = start.0 + dx[idx]
      let y = start.1 + dy[idx]
      if R == x && C == y {
        print(cnt)
        exit(0)
      }
      cnt += 1
    }
    return
  }
  let plus = width * width / 4
  let llen = width / 2
  if isRange((R, C), (start, (start.0+llen, start.1+llen))) {
    DFS((start.0, start.1), llen)
  }
  cnt += plus
  if isRange((R, C), ((start.0, start.1 + llen),
                     (start.0 + llen, start.1 + width))) {
  DFS((start.0, start.1 + llen), llen)
  }
  cnt += plus
  if isRange((R, C), ((start.0 + llen, start.1),
                     (start.0 + width, start.1 + llen))) {
  DFS((start.0 + llen, start.1), llen)
  }
  cnt += plus
  if isRange((R, C), ((start.0 + llen, start.1 + llen),
                     (start.0 + width, start.1 + width))) {
  DFS((start.0 + llen, start.1 + llen), llen)
  }
  cnt += plus
}

DFS((0, 0), len)
*/

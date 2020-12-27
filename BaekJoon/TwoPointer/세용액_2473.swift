//
//  세용액_2473.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/12/28.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

/*
let ip = { Int(readLine()!)! }
let ip2: (() -> [Int]) = {
  let S = readLine()!
  var pos = true
  var tmp = 0
  var result: [Int] = []
  S.forEach {
    if $0 == " " {
      if !pos { tmp *= -1 }
      result.append(tmp)
      tmp = 0
      pos = true
      return
    } else if $0 == "-" {
      pos = false
      return
    }
    tmp = tmp * 10 + Int($0.asciiValue!) - 48
  }
  if !pos { tmp *= -1 }
  result.append(tmp)
  return result
}

let N = ip()
let G = ip2().sorted()
var Ans = [0, 0, 0]
var mn = Int.max

func TP(_ idx: Int) {
  var (left, right) = (0, N-1)
  while left < right {
    if left == idx { left += 1 }
    if right == idx { right -= 1 }
    if left >= right { break }

    let sum = G[left] + G[idx] + G[right]
    var absv = sum
    if absv < 0 { absv *= -1 }
    if mn > absv {
      mn = absv
      Ans = [G[left], G[idx], G[right]]
      if mn == 0 { break }
    }

    if sum < 0 { left += 1 }
    else { right -= 1 }
  }
}

(0..<N-2).forEach {
  TP($0)
}

print(Ans.sorted().map { "\($0)" }.joined(separator: " "))
*/

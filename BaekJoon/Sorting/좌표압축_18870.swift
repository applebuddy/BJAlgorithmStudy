//
//  좌표압축_18870.swift
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
  var pos = true
  S.forEach {
    if $0 == " " {
      if !pos { tmp *= -1 }
      result.append(tmp)
      tmp = 0
      pos = true
      return
    }

    if $0 == "-" {
      pos = false
      return
    }
    tmp = tmp * 10 + Int($0.unicodeScalars.first!.value) - 48
  }
  if !pos { tmp *= -1 }
  result.append(tmp)
  return result
}

var dic = [Int: Int]()
let _ = readLine()
let list = ip()
let G = list.sorted()
var prev = Int.min
var cnt = 0
G.forEach {
  if prev < $0 {
    prev = $0
    dic[$0] = cnt
    cnt += 1
  }
}

print(list.map { "\(dic[$0]!)" }.joined(separator: " "))
*/

//
//  나무자르기_2805.swift
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

let arr0 = ip()
let arr1 = ip()
let N = arr0[0], M = arr0[1]
var maxH = 0
var trees = [Int](repeating: 0, count: N)

for i in arr1.indices {
    trees[i] = arr1[i]
    maxH = trees[i] > maxH ? trees[i] : maxH
}

var left = 1, right = maxH-1, Ans = 0
while left <= right {
    let mid = (left + right) / 2
    var tot = 0
    for i in trees.indices {
        if trees[i] > mid {
            tot += trees[i] - mid
        }
    }
    
    if tot >= M {
        left = mid + 1
        Ans = Ans < mid ? mid : Ans
    } else {
        right = mid - 1
    }
}

print(Ans)
*/

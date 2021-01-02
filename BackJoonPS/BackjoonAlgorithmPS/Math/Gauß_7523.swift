//
//  Gauß_7523.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/01/03.
//  Copyright © 2021 MungGu. All rights reserved.
//

/*
let N = Int(readLine()!)!

func sumFromZero(_ to: Int) -> Int {
  return to * (to + 1) / 2
}

for cnt in 1...N {
  let arr = readLine()!.split(separator: " ").map { Int(String($0))! }
  let (from, to) = (arr[0], arr[1])
  var result = 0
  if from > 0 && to >= 0 {
    result += sumFromZero(to) - sumFromZero(from) + from
  }
  else if from <= 0 && to > 0 {
    result += sumFromZero(to) - sumFromZero(0) + from
    result -= sumFromZero(from)
  }
  else if from < 0 && to <= 0 {
    let tto = -1 * to
    let ffrom = -1 * from
    result -= sumFromZero(ffrom) - sumFromZero(tto) + tto
  }

  print("Scenario #\(cnt):")
  print(result, "\n")
}
*/


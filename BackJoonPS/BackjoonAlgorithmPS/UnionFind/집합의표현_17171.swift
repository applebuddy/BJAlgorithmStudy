//
//  집합의표현_17171.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/02/06.
//  Copyright © 2021 MungGu. All rights reserved.
//

// MARK: - 집합의 표현 17171
// MARK: Union Find swift 문제풀이

/*
var answer: [String] = []
let ip: (() -> [Int]) = {
  var result: [Int] = []
  var tmp = 0
  let input = readLine()!
  input.forEach {
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

let arr = ip()
let N = arr[0], K = arr[1]
var Parent = [Int](0...N)

func getParent(_ node: Int) -> Int {
    if Parent[node] == node { return node }
    Parent[node] = getParent(Parent[node])
    return Parent[node]
}

func mergeParent(_ A: Int, _ B: Int) {
    let parentA = getParent(A)
    let parentB = getParent(B)
    if parentA < parentB { Parent[parentB] = parentA }
    else { Parent[parentA] = parentB }
}

(0..<K).forEach { _ in
    let arr2 = ip()
    let T = arr2[0], A = arr2[1], B = arr2[2]
    if T == 0 {
        if getParent(A) != getParent(B) {
          mergeParent(A,B)
        }
        let status = Parent.map { "\($0)" }.joined(separator: " ")
        print("now status : \(status)")
    } else {
        if getParent(A) == getParent(B) { answer.append("YES") }
        else { answer.append("NO") }
    }
}

print(answer.joined(separator: "\n"))
*/

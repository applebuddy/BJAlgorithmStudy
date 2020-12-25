//
//  선수과목_14567.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/12/25.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

/*
struct DoubleStackQueue<T: Comparable> {
    var leftStack = [T]()
    var rightStack = [T]()
    
    mutating func push(_ val: T) {
        rightStack.append(val)
    }
    
    mutating func pop() -> T {
        if leftStack.isEmpty {
            leftStack = rightStack.reversed()
            rightStack.removeAll()
        }
        return leftStack.removeLast()
    }
    
    mutating func front() -> T? {
        return !leftStack.isEmpty ? leftStack.last! : rightStack.first!
    }

    var isEmpty: Bool {
        return leftStack.isEmpty && rightStack.isEmpty
    }
}

let ip: (() -> [Int]) = {
  let S = readLine()!
  var tmp: Int = 0
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

let arr = ip()
let (N, M) = (arr[0], arr[1])
var G = [[Int]](repeating: [Int](), count: N+1)
var chk = [Int](repeating: 0, count: N+1)
var order = chk
var result: [Int] = []
(0..<M).forEach { _ in
  let arr2 = ip()
  G[arr2[0]].append(arr2[1])
  chk[arr2[1]] += 1
}

var Q = DoubleStackQueue<Int>()
var cur = 0
var cnt = 1
(1...N).forEach { node in
  if chk[node] == 0 {
    order[node] = cnt
    Q.push(node)
  }
}

(1...N).forEach { node in
  let now = Q.pop()
  for idx in G[now].indices {
    let next = G[now][idx]
    chk[next] -= 1
    if chk[next] == 0 {
      order[next] = order[now] + 1
      Q.push(next)
    }
  }
}

print(order[1...N].map { "\($0)" }.joined(separator: " "))
*/

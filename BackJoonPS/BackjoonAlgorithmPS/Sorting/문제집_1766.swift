//
//  문제집_1766.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/01/03.
//  Copyright © 2021 MungGu. All rights reserved.
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

    mutating func sort() {
      self.leftStack = (leftStack + rightStack).sorted(by: >)
      self.rightStack.removeAll()
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
var result: [Int] = []
(0..<M).forEach { _ in
  let arr2 = ip()
  G[arr2[0]].append(arr2[1])
  chk[arr2[1]] += 1
}

var Q = DoubleStackQueue<Int>()
var cur = 0
(1...N).forEach { node in
  if chk[node] == 0 {
    Q.push(node)
  }
}

while !Q.isEmpty {
  Q.sort()
  let now = Q.pop()
  result.append(now)
  for idx in G[now].indices {
    let next = G[now][idx]
    chk[next] -= 1
    if chk[next] == 0 {
      Q.push(next)
    }
  }
}

print(result.map { "\($0)" }.joined(separator: " "))
*/


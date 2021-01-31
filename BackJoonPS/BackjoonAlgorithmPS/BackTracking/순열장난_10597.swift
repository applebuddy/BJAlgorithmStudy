//
//  순열장난_10597.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/01/06.
//  Copyright © 2021 MungGu. All rights reserved.
//

/*
import Foundation

let G = Array(readLine()!).map { Int(String($0))! }
let len = G.count
var Ans = [Int]()
var dic = [Bool](repeating: false, count: 51)

func isValidPerm() -> Bool {
  let mx = Ans.max()!
  for num in 1...mx {
    if !dic[num] { return false }
  }
  return true
}

func DFS(_ idx: Int) {
    if idx >= len && isValidPerm() {
        print(Ans.map { "\($0)" }.joined(separator: " "));
        exit(0)
    }
    
    var now = 0
    for i in 0..<2 {
        if idx+i >= len { break }
        now = now * 10 + G[idx+i]
        if now == 0 || now > 50 { return }
        if !dic[now] {
            dic[now] = true
            Ans.append(now)
            DFS(idx+1+i)
            dic[now] = false
            Ans.removeLast()
        }
    }
}

DFS(0)
*/

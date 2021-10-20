//
//  압축_1662.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/04.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 압축 1662

// MARK: Stack swift 복습 문제풀이 (최적화)
/*
let S = Array(readLine()!)
var idx = 0
var G = [[Character]](repeating: [Character](), count: 101)
var V = [Int](repeating: 0, count: 101)

for i in S.indices {
  if S[i] == "(" { idx += 1 }
  else if S[i] == ")" {
    idx -= 1
    V[idx] += Int(G[idx].last!.asciiValue! - 48) * V[idx+1] - 1
    V[idx+1] = 0
    G[idx+1] = []
  } else {
    V[idx] += 1
    G[idx].append(S[i])
  }
}

print(V[0])
 */


// MARK: Stack swift 문제풀이

/*
import Foundation

let arr = Array(readLine()!)
var STK = [Int]()
var G = [Int](repeating: 0, count: 51)

for i in arr.indices {
    if arr[i] == "(" {
        STK.append(i)
    } else if arr[i] == ")" {
        let depth = STK.count
        let topIdx = STK.last!
        G[depth-1] += (Int(arr[topIdx-1].unicodeScalars.first!.value - 48) * G[depth]) - 1
        STK.removeLast()
        G[depth] = 0
    } else {
        let depth = STK.count
        G[depth] += 1
    }
}

print(G[0])
*/

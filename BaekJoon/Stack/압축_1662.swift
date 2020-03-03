//
//  압축_1662.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/04.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 압축 1662
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

//
//  바구니순서바꾸기_10812.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/05.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 바구니순서바꾸기 10812 / 브2
// MARK: swift 문제풀이

/*
import Foundation

let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], T = arr[1]
var bascket = Array(1...N)

for _ in 0..<T {
    let arr2 = readLine()!.split(separator: " ").map { Int($0)! }
    let i = arr2[0]-1, j = arr2[1]-1, k = arr2[2]-1
    var temp = bascket
    var nowIdx = k
    for idx in i...j {
        temp[idx] = bascket[nowIdx]
        nowIdx += 1
        if nowIdx > j { nowIdx = i }
    }
    bascket = temp
}

print(bascket.map { String($0) }.joined(separator: " "))
*/

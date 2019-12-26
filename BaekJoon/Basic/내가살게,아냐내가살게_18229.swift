//
//  내가살게,아냐내가살게_18229.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/27.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 내가 살게, 아냐 내가 살게 18229
/*
import Foundation

let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], M = arr[1], K = arr[2]

var comp = [[Int]]()
var score = [Int](repeating: 0, count: N)
for _ in 0..<N {
    let arr2 = readLine()!.split(separator: " ").map { Int($0)! }
    comp.append(arr2)
}

for i in comp[0].indices {
    for j in comp.indices {
        score[j] += comp[j][i]
        if score[j] >= K {
            print("\(j+1) \(i+1)"); exit(0)
        }
    }
}
*/

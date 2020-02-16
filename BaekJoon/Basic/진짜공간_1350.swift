//
//  진짜공간_1350.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/16.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 진짜공간_1350
// MARK: 문제풀이
/*
import Foundation

let N = Int(readLine()!)!
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let C = Int(readLine()!)!
var Ans = 0

for i in arr.indices {
    if arr[i] == 0 { continue }
    else if arr[i] <= C { Ans += 1 }
    else { Ans += ((arr[i]-1) / C + 1) }
}

print(Ans * C)
*/

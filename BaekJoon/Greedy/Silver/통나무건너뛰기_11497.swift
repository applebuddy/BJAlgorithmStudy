//
//  통나무건너뛰기_11497.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/09.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 통나무 건너뛰기 11497
// MARK: Greedy swift 문제풀이

/*
let T = Int(readLine()!)!

for _ in 0..<T {
    let _ = readLine()
    let arr = readLine()!.split(separator: " ").map { Int($0)! }.sorted()
    var left = arr[0]
    var right = arr[1]
    var diff = 0
    for i in 2..<arr.count {
        let target = i % 2 == 0 ? left : right
        let temp = target > arr[i] ? target - arr[i] : arr[i] - target
        diff = diff < temp ? temp : diff
        if i % 2 == 0 { left = arr[i] }
        else { right = arr[i] }
    }
    
    let lastDiff = left > right ? left - right : right - left
    diff = diff < lastDiff ? lastDiff : diff
    
    print(diff)
}
*/

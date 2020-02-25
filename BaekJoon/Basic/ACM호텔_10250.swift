//
//  ACM호텔_10250.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/25.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - ACM 호텔 10250
// MARK: swift 문제풀이

/*
import Foundation

let T = Int(readLine()!)!
for _ in 0..<T {
    let arr = readLine()!.split(separator: " ").map { Int($0)! }
    let H = arr[0], W = arr[1], K = arr[2]
    let th = (K-1) / H + 1
    var h = K % H
    h = h==0 ? H : h
    
    let first = Array(String(h)).map { String($0) }
    var second = Array(String(th)).map { String($0) }
    while second.count < 2 {
        second.insert("0", at: 0)
    }
    
    print("\(first.joined())\(second.joined())")
}
*/

//
//  Speed-Limit_4635.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/12.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - Speed-Limit
/*
while true {
    let N = Int(readLine()!)!
    if N == -1 { break }
    var prev = 0, Ans = 0
    for _ in 0..<N {
        let arr = readLine()!.split(separator: " ").map { Int($0)! }
        let M = arr[0], time = arr[1]
        Ans += M * (time-prev)
        prev = time
    }
    print("\(Ans) miles")
}
*/

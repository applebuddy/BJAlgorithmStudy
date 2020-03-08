//
//  감소하는수_1038.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/08.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 감소하는수 1038
// MARK: Queue swift 문제풀이

/*
import Foundation

let K = Int(readLine()!)!
var cnt = 10

if K <= 10 { print(K); exit(0) }

var Q = [Int]()
for i in 1...9 { Q.append(i) }

while !Q.isEmpty {
    let nowNum = Q.first!
    let target = nowNum % 10
    Q.removeFirst()
    
    for i in 0..<target {
        let nextNum = nowNum * 10 + i
        cnt += 1
        if nextNum == 9876543210 && cnt < K+1 { print(-1); exit(0) }
        if cnt == K+1 { print(nextNum); exit(0) }
        Q.append(nextNum)
    }
}
*/

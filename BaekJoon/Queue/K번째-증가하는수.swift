//
//  K번째-증가하는수.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/09.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - K번째 증가하는수 구하기 로직
// MARK: Queue 활용 풀이

/*
import Foundation

let K = Int(readLine()!)!
var cnt = 10

if K <= 10 { print(K-1); exit(0) }

var Q = [String]()

for i in 0...9 { Q.append("\(i)") }

while !Q.isEmpty {
    let nowNum = Q.first!
    Q.removeFirst()
    let target = Int(nowNum)! % 10
    if target+1 > 9 { continue }
    for i in target+1...9 {
        let tempNum = "\(nowNum)\(i)"
        if cnt == K-1 { print(tempNum); exit(0) }
        cnt += 1
        Q.append(tempNum)
    }
}

print(-1)
*/

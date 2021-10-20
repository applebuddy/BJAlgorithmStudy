//
//  소가길을건너간이유3_14469.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/09.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 소가 길을 건너간 이유 3 14469
// MARK: swift 문제풀이

/*
let N = Int(readLine()!)!
var cow = [[Int]](repeating: [Int](), count: N)
for i in 0..<N {
    cow[i] = readLine()!.split(separator: " ").map { Int($0)! }
}

cow.sort { $0[0] < $1[0] }

var time = 0
for i in cow.indices {
    if time > cow[i][0] {
        time += cow[i][1]
    } else {
        time = cow[i][0] + cow[i][1]
    }
}

print(time)
*/

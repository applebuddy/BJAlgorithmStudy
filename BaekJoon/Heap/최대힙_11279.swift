//
//  최대힙_11279.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/10.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 최대 힙 11279
// MARK: swift 문제풀이

/*
import Foundation

let T = Int(readLine()!)!
var Q = [Int]()

extension Array where Element == Int {
    mutating func binarySearchInsert(_ val: Int) {
        if self.isEmpty { self.append(val); return }
        var left = 0, right = self.count - 1
        while left <= right {
            let mid = (left + right) / 2
            if self[mid] > val {
                right = mid - 1
            } else {
                left = mid + 1
            }
        }
        self.insert(val, at: left)
    }
}

for _ in 0..<T {
    let N = Int(readLine()!)!
    if N == 0 {
        if Q.isEmpty { print(0) }
        else { print(Q.removeLast()) }
    } else {
        Q.binarySearchInsert(N)
    }
}
*/

//
//  카드정렬하기_1715.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/12.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 카드정렬하기 1715
// MARK: - 이진탐색 활용 문제풀이
/*
import Foundation

let N = Int(readLine()!)!
var PQ = [Int]()
var Ans = 0

extension Array where Element == Int {
    mutating func binarySearchInsert(_ val: Int) {
        if self.isEmpty { self.append(val); return }
        var left = 0
        var right = self.count-1
        while left <= right {
            let mid = (left + right) / 2
            if self[mid] < val {
                right = mid - 1
            } else {
                left = mid + 1
            }
        }

        self.insert(val, at: left)
    }
}

for _ in 0..<N {
    let num = Int(readLine()!)!
    PQ.binarySearchInsert(num)
}

while PQ.count > 1 {
    let first = PQ.last!
    PQ.removeLast()
    let second = PQ.last!
    PQ.removeLast()
    PQ.binarySearchInsert(first+second)
    Ans += first + second
}

print(Ans)
*/

//
//  가장긴감소하는부분수열_11722.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/07.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 가장 긴 감소하는 부분수열
// MARK: - LDS 문제풀이

/*
import Foundation

extension Array where Element == Int {
    func lower_bound(_ val: Int) -> Int {
        var left = 0, right = self.count-1
        while left <= right {
            let mid = (left + right) / 2
            if self[mid] >= val {
                right = mid - 1
            } else {
                left = mid + 1
            }
        }
        return right + 1
    }
}

let N = Int(readLine()!)
let arr = readLine()!.split(separator: " ").map { Int($0)! }
var Ans = [Int]()
var idx = arr.count - 1
while idx >= 0 {
    let low = Ans.lower_bound(arr[idx])
    if low == Ans.count {
        Ans.append(arr[idx])
    } else {
        Ans[low] = arr[idx]
    }
    idx -= 1
}

print(Ans.count)
*/

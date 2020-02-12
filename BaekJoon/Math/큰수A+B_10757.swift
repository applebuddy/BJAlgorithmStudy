//
//  큰수A+B_10757.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/12.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 큰 수 A+B 10757
// MARK: 문제풀이
/*
import Foundation

let arr = readLine()!.split(separator: " ").map { String($0) }
var A = Array(arr[0]).map { Int(String($0))! }
var B = Array(arr[1]).map { Int(String($0))! }

var ALen = A.count, BLen = B.count
if ALen > BLen {
    swap(&A,&B)
    BLen = ALen
}

while BLen > A.count {
    A.insert(0, at: 0)
}

var Ans = [Int](repeating: 0, count: BLen+1)
var idx = BLen-1
while idx >= 0 {
    Ans[idx] += (A[idx] + B[idx] + Ans[idx+1]) / 10
    Ans[idx+1] = (A[idx] + B[idx] + Ans[idx+1]) % 10
    idx -= 1
}

while Ans.count > 0 && Ans.first! == 0 {
    Ans.removeFirst()
}

print(Ans.map { String($0) }.joined())
*/

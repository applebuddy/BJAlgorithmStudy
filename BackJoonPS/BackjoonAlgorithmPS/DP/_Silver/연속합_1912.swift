//
//  연속합_1912.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/06.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 연속합 1912
// MARK: DP swift 문제풀이

/*
import Foundation

let N = Int(readLine()!)!
let arr = readLine()!.split(separator: " ").map { Int($0)! }

var dp = 0
var Ans = -1001
for i in arr.indices {
    dp += arr[i]
    Ans = Ans < dp ? dp : Ans;
    if dp < 0 { dp = 0 }
}

print(Ans)
*/

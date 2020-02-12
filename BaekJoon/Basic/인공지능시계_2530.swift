//
//  인공지능시계_2530.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/12.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 인공지능시계 2530
// MARK: 문제풀이
/*

import Foundation

let arr = readLine()!.split(separator: " ").map { Int($0)! }
var add = [Int](repeating: 0, count: 3)
var Ans = add
var sec = Int(readLine()!)!
add[2] = sec % 60
sec /= 60
add[1] = sec % 60
sec /= 60
add[0] = sec

Ans[2] = (arr[2] + add[2]) % 60
Ans[1] += (arr[2] + add[2]) / 60
Ans[0] = (Ans[1] + arr[1] + add[1]) / 60
Ans[1] = (Ans[1] + arr[1] + add[1]) % 60
Ans[0] += arr[0] + add[0]

if Ans[0] >= 24 { Ans[0] %= 24 }

for i in Ans.indices
{
    print(Ans[i], terminator: " ")
}
print()

*/

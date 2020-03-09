//
//  괄호없는사칙연산_16503.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/09.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 괄호없는사칙연산 16503
// MARK: swift 문제풀이

/*
import Foundation

var arr = readLine()!.split(separator: " ")
var len = arr.count
var val = Int(arr[0])!
var Ans = [Int]()
for i in 1..<len {
    if arr[i] == "+" { val += Int(arr[i+1])! }
    else if arr[i] == "-" { val -= Int(arr[i+1])! }
    else if arr[i] == "*" { val *= Int(arr[i+1])! }
    else if arr[i] == "/" { val /= Int(arr[i+1])! }
}

Ans.append(val)
arr.reverse()

val = Int(arr[0])!

for i in 1..<len {
    if arr[i] == "+" { val += Int(arr[i+1])! }
    else if arr[i] == "-" { val = Int(arr[i+1])! - val }
    else if arr[i] == "*" { val *= Int(arr[i+1])! }
    else if arr[i] == "/" { val = Int(arr[i+1])! / val }
}

Ans.append(val)
print(Ans.min()!, Ans.max()!, separator: "\n")
*/

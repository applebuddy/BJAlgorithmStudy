//
//  스택수열_1874.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/25.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 스택수열 1874
// MARK: Stack swift 문제풀이

/*
import Foundation

let N = Int(readLine()!)!
var target = [Int]()
for _ in 0..<N {
    let num = Int(readLine()!)!
    target.append(num)
}

var STK = [Int]()
var Ans = [String]()
var num = 1
var tIdx = 0
var flag = true

while num <= N && tIdx < target.count {
    if !STK.isEmpty  {
        if STK.last! == target[tIdx] {
            STK.removeLast()
            Ans.append("-")
            tIdx += 1
        } else { // 타겟값이 아닌데 현재 들어간 값이 타겟보다 작으면 넣는다.
            if target[tIdx] > num {
                STK.append(num)
                Ans.append("+")
                num += 1
            } else if num == target[tIdx] {
                Ans.append("+")
                STK.append(num)
                num += 1
            } else {
                flag = false
                break
            }
        }
    } else {
        STK.append(num)
        Ans.append("+")
        num += 1
    }
}

while tIdx < target.count {
    if !STK.isEmpty {
        if STK.last! != target[tIdx] { print("NO"); exit(0) }
        else { STK.removeLast(); Ans.append("-") }
        tIdx += 1
    } else { print("NO"); exit(0) }
}

if !flag { print("NO") }
else { Ans.forEach { print("\($0)") } }
*/

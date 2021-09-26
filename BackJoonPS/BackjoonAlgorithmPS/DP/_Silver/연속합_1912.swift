//
//  연속합_1912.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/06.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 연속합 1912
// MARK: DP swift 문제풀이 + 복습 1회

func boj1912() {
    let readInput: (() -> [Int]) = {
        var result: [Int] = []
        var temp = 0
        var isMinus = false
        for char in readLine()! {
            if char == " " {
                result.append(temp * (isMinus ? -1 : 1))
                temp = 0
                isMinus = false
                continue
            } else if char == "-" {
                isMinus = true
                continue
            }

            temp = temp * 10 + Int(char.asciiValue!) - 48
        }
        result.append(temp * (isMinus ? -1 : 1))
        return result
    }

    let N = readInput().first!
    print(readInput().reduce(into: (ans: Int.min, temp: 0)) { tp, num in
        tp.temp += num
        tp.temp = tp.temp > num ? tp.temp : num
        tp.ans = tp.temp > tp.ans ? tp.temp : tp.ans
    }.ans)
}

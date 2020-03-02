//
//  숫자놀이_1755.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/02.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 숫자놀이 1755
// MARK: sort swift 문제풀이

/*
import Foundation

let word = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
let arr = readLine()!.split(separator: " ").map { Int($0)! }
var Ans = [(Int, String)]()
for i in arr[0]...arr[1] {
    var S = ""
    var num = i
    while num > 0 {
        S = "\(word[num%10])\(S)"
        num /= 10
    }
    Ans.append((i, S))
}

Ans.sort { $0.1 < $1.1 }
var answer = ""
var cnt = 0
for i in Ans.indices {
    answer += "\(Ans[i].0)"
    cnt += 1
    if cnt == 10 {
        cnt = 0
        print(answer)
        answer = ""
    } else if i != Ans.count-1 { answer += " " }
    
}

print(answer)
*/

//
//  부분합_1806.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/12/26.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

/*
let ip: (() -> [Int]) = {
    let S = readLine()!
    var result: [Int] = []
    var tmp = 0
    S.forEach {
        if $0 == " " {
            result.append(tmp)
            tmp = 0
            return
        }
        tmp = tmp * 10 + Int($0.unicodeScalars.first!.value) - 48
    }
    result.append(tmp)
    return result
}

let arr = ip()
let (N, S) = (arr[0], arr[1])
var sum = 0
let G = ip()
var (left, right) = (0, 0)
var Ans = Int.max
while right < G.count {
    while right < G.count && sum < S {
        sum += G[right]
        right += 1
    }
    
    if right >= G.count { break }
    if sum == S {
        let len = right - left
        Ans = len < Ans ? len : Ans
        sum += G[right]
        right += 1
    } else {
        let len = right - left
        Ans = len < Ans ? len : Ans
        sum -= G[left]
        left += 1
    }
}

while left < right && sum >= S {
    let len = right - left
    Ans = len < Ans ? len : Ans
    sum -= G[left]
    left += 1
}

print(Ans == Int.max ? 0 : Ans)
*/

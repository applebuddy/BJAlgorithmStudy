//
//  이건무슨진법이지?_13877.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/10.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 이건 무슨 진법이지? 13877
// MARK: swift 문제풀이

/*
let T = Int(readLine()!)!

let key = ["A", "B", "C", "D", "E", "F"]
func convertNum(_ num: Int, _ R: Int) -> Int {
    var N = num
    var flag = 1
    var Ans = 0
    while N > 0 {
        let rem = N % 10
        if R == 8 && rem > 7 { return 0 }
        Ans += (rem) * flag
        flag *= R
        N /= 10
    }
    return Ans
}

for i in 1...T {
    let arr = readLine()!.split(separator: " ").map { Int($0)! }
    let N = arr[1]
    print(i, convertNum(N,8), N, convertNum(N,16), separator: " ")
}
*/

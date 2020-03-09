//
//  Hawk-eyes.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/09.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - Hawk eyes
// MARK: swift 문제풀이

/*
let dic: [Character: [Int]] = ["A":[0,1], "B":[0,2], "C":[0,3], "D":[1,2], "E":[1,3], "F":[2,3]]
let code = Array(readLine()!)
var yabawi = [1,0,0,2]
var Ans: (Int,Int) = (0,0)

for i in code.indices {
    let arr = dic[code[i]]!
    yabawi.swapAt(arr[0], arr[1])
}

for i in yabawi.indices {
    if yabawi[i] == 1 { Ans.0 = i+1 }
    else if yabawi[i] == 2 { Ans.1 = i+1 }
}

print(Ans.0, Ans.1, separator: "\n")
*/

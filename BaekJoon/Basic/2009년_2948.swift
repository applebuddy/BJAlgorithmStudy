//
//  2009년_2948.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/12/25.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

/*
let arr = readLine()!.split(separator: " ").map { Int(String($0))! }
let (month, day) = (arr[1], arr[0])
let mList = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
let dList = ["Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"]
print(dList[(mList[0...month-1].reduce(0, +) + day - 1) % 7])
*/

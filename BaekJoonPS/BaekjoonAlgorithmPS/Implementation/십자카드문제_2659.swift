//
//  십자카드문제_2659.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/29.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 십자카드 문제 2659
// MARK: swift 문제풀이

/*
import Foundation

let target = readLine()!.split(separator: " ").map { Int($0)! }
let Target = target[0] * 1000 + target[1] * 100 + target[2] * 10 + target[3]
var comp = [Int](repeating: 0, count: 4)
var value = 1111
var dic = [Int:Int]()
var cnt = 1

while value <= 9999 {
    if dic[value] != nil { value += 1; continue }
    var flag = true
    var num = value
    for i in 0..<4 {
        if num % 10 == 0 { flag = false; break }
        comp[3-i] = num % 10
        num /= 10
    }
    
    if flag == false { value += 1; continue }
    
    let second = comp[3] * 1000 + comp[0] * 100 + comp[1] * 10 + comp[2]
    let third = comp[2] * 1000 + comp[3] * 100 + comp[0] * 10 + comp[1]
    let fourth = comp[1] * 1000 + comp[2] * 100 + comp[3] * 10 + comp[0]
    if dic[value] == nil && dic[second] == nil && dic[third] == nil && dic[fourth] == nil {
        dic[value] = 1; dic[second] = 1; dic[third] = 1; dic[fourth] = 1
    } else { flag = false }
    
    if flag == true {
        if Target == value || Target == second || Target == third || Target == fourth {
            print(cnt); exit(0)
        }
        cnt += 1
    }
    
    value += 1
}
*/

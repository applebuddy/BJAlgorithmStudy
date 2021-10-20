//
//  카잉달력_6064.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/09/23.
//  Copyright © 2021 MungGu. All rights reserved.
//

/*
import Foundation

let readInput: (() -> [Int]) = {
    var result: [Int] = []
    var temp = 0
    readLine()!.forEach { char in
        if char == " " {
            result.append(temp)
            temp = 0
            return
        }
        
        temp = temp * 10 + Int(char.asciiValue!) - 48
    }
    result.append(temp)
    return result
}

let N = readInput().first!
(0..<N).forEach { _ in
    let ip2 = readInput()
    let (m, n, x, y) = (ip2[0], ip2[1], ip2[2], ip2[3])
    var count = x % (m + 1)
    var tempY = x
    for _ in (0..<n) {
        let nowY = tempY % n == 0 ? n : tempY % n
        if nowY == y { break }
        tempY = nowY + m
        count += m
    }
    print(count < getLCM(n, m) ? count : -1)
}

func getGCD(_ x: Int, _ y: Int) -> Int {
    if y == 0 { return x }
    return getGCD(y, x%y)
}

func getLCM(_ x: Int, _ y: Int) -> Int {
    return (x * y) / getGCD(x, y)
}
*/

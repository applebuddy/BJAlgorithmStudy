//
//  Viva-la-Diferencia.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/14.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK - 문제풀이
/*
import Foundation

var arr = [Int]()

func checkEqual() -> Bool {
    return arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[3]
}

while true {
    var cnt = 0
    arr = readLine()!.split(separator: " ").map { Int($0)! }
    if arr[0]==0 && checkEqual() { break }
    
    while true {
        if checkEqual() { break }
        cnt += 1
        var temp = [Int](repeating: 0, count: 4)
        temp[0] = arr[0]-arr[1]
        temp[0] *= temp[0]>0 ? 1 : -1
        temp[1] = arr[1]-arr[2]
        temp[1] *= temp[1]>0 ? 1 : -1
        temp[2] = arr[2]-arr[3]
        temp[2] *= temp[2]>0 ? 1 : -1
        temp[3] = arr[3]-arr[0]
        temp[3] *= temp[3]>0 ? 1 : -1
        arr = temp
    }
    print(cnt)
}
*/

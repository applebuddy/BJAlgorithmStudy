//
//  데구르르_9494.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/15.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 데구르르
// MARK: 문제풀이
/*
import Foundation

while true {
    let T = Int(readLine()!)!
    if T == 0 { break }
    var arr = [[Character]](repeating: [Character](), count: T)
    for i in 0..<T {
        arr[i] = Array(readLine()!)
    }
    
    var i = 0, j = 0
    while i < arr.count {
        while j < arr[i].count {
            if arr[i][j] == " " {
                break
            }
            j += 1
        }
        
        i += 1
        if i == arr.count { break }
    }
    print(j+1)
    
}
*/

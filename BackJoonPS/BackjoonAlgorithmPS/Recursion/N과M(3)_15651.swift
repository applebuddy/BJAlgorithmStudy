//
//  N과M(3)_15651.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/03.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - N과M(3) 15651
// MARK: Recursion swift

/*
import Foundation

let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], M = arr[1]
var Ans = [String](repeating: " ", count: M)

func recursion(_ cnt: Int) {
    if cnt >= M {
        print(Ans.joined(separator: " "))
        return
    }
    
    for i in 1...N {
        Ans[cnt] = String(i)
        recursion(cnt+1)
    }
}

recursion(0)
*/

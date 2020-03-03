//
//  N과M(4)_15652.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/03.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - N과M(4) 15652
// MARK: Recursion swift 문제풀이

/*
import Foundation

let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], M = arr[1]
var Ans = [String](repeating: " ", count: M)
func go(_ cnt: Int, _ last: Int) {
    if cnt >= M {
        print(Ans.joined(separator: " "))
        return
    }
    
    for i in last...N {
        Ans[cnt] = "\(i)"
        go(cnt+1, i)
    }
}

go(0,1)
*/

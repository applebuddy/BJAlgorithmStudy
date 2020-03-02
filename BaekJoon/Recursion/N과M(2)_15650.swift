//
//  N과M(2)_15650.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/03.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - N과M(2) 15650
// MARK: Recursion swift 문제풀이

/*
import Foundation

let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], M = arr[1]
var C = [Int](repeating: 0, count: N+1)
var Ans = [Int]()

func go(_ cnt: Int) {
    if cnt >= M {
        var S = ""
        for i in Ans.indices {
            S += "\(Ans[i]) "
        }
        print(S)
        return
    }
    
    var idx = cnt + 1
    while idx <= N {
        if C[idx] == 1 || (!Ans.isEmpty && Ans.last! > idx) { idx+=1; continue }
        C[idx] = 1
        Ans.append(idx)
        go(cnt+1)
        Ans.removeLast()
        C[idx] = 0
        idx += 1
    }
}

go(0)
*/

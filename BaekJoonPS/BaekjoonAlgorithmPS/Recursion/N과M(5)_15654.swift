//
//  N과M(5)_15654.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/03.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - N과M(5) 15654
// MARK: Recursion swift 문제풀이

/*
import Foundation

let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], M = arr[1]

let arr2 = readLine()!.split(separator: " ").map { Int($0)! }.sorted()
var Ans = [String](repeating: " ", count: M)
var C = [Int](repeating: 0, count: 10001)

func go(_ cnt: Int) {
    if cnt >= M {
        print(Ans.joined(separator: " "))
        return
    }
    
    for i in arr2.indices {
        if C[arr2[i]] == 1 { continue }
        C[arr2[i]] = 1
        Ans[cnt] = "\(arr2[i])"
        go(cnt + 1)
        C[arr2[i]] = 0
    }
}

go(0)
*/

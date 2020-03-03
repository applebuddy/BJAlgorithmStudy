//
//  N과M(6)_15655.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/03.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - N과M(6) 15655
// MARK: Recursion swift 문제풀이

/*
import Foundation

let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], M = arr[1]
let arr2 = readLine()!.split(separator: " ").map { Int($0)! }.sorted()
var Ans = [String](repeating: " ", count: M)

func go(_ cnt: Int) {
    if cnt >= M {
        print(Ans.joined(separator: " "))
        return
    }
    
    for i in cnt..<N {
        if (cnt>0 && Int(Ans[cnt-1])! >= arr2[i]) { continue }
        Ans[cnt] = "\(arr2[i])"
        go(cnt + 1)
    }
}

go(0)
*/

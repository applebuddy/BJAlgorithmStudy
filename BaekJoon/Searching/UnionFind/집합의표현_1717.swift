//
//  집합의표현_1717.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/01.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 집합의표현 1717
// MARK: UnionFind swift 문제풀이

/*
import Foundation

let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], K = arr[1]
var Parent = [Int](0...N)

func getParent(_ node: Int) -> Int {
    if Parent[node] == node { return node }
    return getParent(Parent[node])
}

func mergeParent(_ A: Int, _ B: Int) {
    let parent = getParent(A)
    let parent2 = getParent(B)
    if parent < parent2 { Parent[parent2] = parent }
    else { Parent[parent] = parent2 }
}

for _ in 0..<K {
    let arr2 = readLine()!.split(separator: " ").map { Int($0)! }
    let T = arr2[0], A = arr2[1], B = arr2[2]
    if T == 0 {
        mergeParent(A,B)
    } else {
        if getParent(A) == getParent(B) { print("YES") }
        else { print("NO") }
    }
}
*/

//
//  완전이진트리_9934.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/07.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 완전이진트리 9934
// MARK: Tree swift 문제풀이

/*
import Foundation

let K = Int(readLine()!)!
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let size = (1<<K) - 1
var tree = [Int](repeating: -1, count: size)
var Ans = [[Int]](repeating: [Int](), count: K)

func getTree(_ start: Int, _ end: Int, _ cnt: Int) {
    if start > end || cnt >= K { return }
    let mid = (start + end) / 2
    if tree[mid] == -1 { tree[mid] = cnt }
    getTree(start, mid-1, cnt+1)
    getTree(mid+1, end, cnt+1)
}

getTree(0, size-1, 0)

for i in tree.indices {
    Ans[tree[i]].append(arr[i])
}

for i in Ans.indices {
    print(Ans[i].map { String($0) }.joined(separator: " "))
}
*/

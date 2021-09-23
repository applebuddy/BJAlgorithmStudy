//
//  구간합구하기_2042.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/09/24.
//  Copyright © 2021 MungGu. All rights reserved.
//

import Foundation

/*
let readInput: (() -> [Int]) = {
    return readLine()!.split(separator: " ").map { Int(String($0))! }
}

@discardableResult
func initTree(array: inout [Int], tree: inout [Int], node: Int, start: Int, end: Int) -> Int {
    if start == end {
        tree[node] = array[start]
        return tree[node]
    }
    
    let mid = (start + end) / 2
    tree[node] = initTree(array: &array, tree: &tree, node: node*2, start: start, end: mid)
        + initTree(array: &array, tree: &tree, node: node*2+1, start: mid+1, end: end)
    return tree[node]
}

func updateTree(tree: inout [Int], node: Int, start: Int, end: Int, index: Int, diff: Int) {
    if !(start <= index && index <= end) { return }
    tree[node] += diff
    if start != end {
        let mid = (start + end) / 2
        updateTree(tree: &tree, node: node*2, start: start, end: mid, index: index, diff: diff)
        updateTree(tree: &tree, node: node*2+1, start: mid+1, end: end, index: index, diff: diff)
    }
}

func querySum(tree: inout [Int], node: Int, start: Int, end: Int, left: Int, right: Int) -> Int {
    if left > end || right < start { return 0 }
    if left <= start && end <= right { return tree[node] }
    let mid = (start + end) / 2
    return querySum(tree: &tree, node: node*2, start: start, end: mid, left: left, right: right)
        + querySum(tree: &tree, node: node*2+1, start: mid+1, end: end, left: left, right: right)
}

let ip = readInput()
let (n, m, k) = (ip[0], ip[1], ip[2])
let h = Int(ceil(log2(Double(n))))
let treeSize = 1 << (h+1)
var tree = [Int](repeating: 0, count: treeSize)
var array: [Int] = []
(0..<n).forEach { _ in array.append(readInput().first!) }

initTree(array: &array, tree: &tree, node: 1, start: 0, end: n-1)
var t = m + k
(0..<t).forEach { _ in
    let ip3 = readInput()
    let (a, b, c) = (ip3[0], ip3[1], ip3[2])
    switch a {
    case 1:
        let diff = c - array[b-1]
        array[b-1] = c
        updateTree(tree: &tree, node: 1, start: 0, end: n-1, index: b-1, diff: diff)
    case 2:
        print(querySum(tree: &tree, node: 1, start: 0, end: n-1, left: b-1, right: c-1))
    default:
        break
    }
}
*/

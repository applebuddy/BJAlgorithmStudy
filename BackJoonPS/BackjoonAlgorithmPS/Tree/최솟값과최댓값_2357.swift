//
//  최솟값과최댓값_2357.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/10/12.
//  Copyright © 2021 MungGu. All rights reserved.
//

import Foundation

func boj2357() {
    let readInput: (() -> [Int]) = {
        var result: [Int] = []
        var temp = 0
        var minus = false
        readLine()!.forEach { char in
            if char == " " {
                result.append(temp * (minus ? -1 : 1))
                temp = 0
                minus = false
                return
            } else if char == "-" {
                minus = true
                return
            }
            
            temp = temp * 10 + Int(char.asciiValue!) - 48
        }
        result.append(temp * (minus ? -1 : 1))
        return result
    }

    typealias Pair = (Int, Int)
    var array = [Int]()
    var minTree = [Int]()
    var maxTree = minTree

    func initTree(_ node: Int, _ start: Int, _ end: Int) {
        if start == end {
            maxTree[node] = array[start]
            minTree[node] = array[start]
            return
        }
        
        initTree(node * 2, start, (start + end) / 2)
        initTree(node * 2 + 1, (start + end) / 2 + 1, end)
        minTree[node] = min(minTree[node * 2], minTree[node * 2 + 1])
        maxTree[node] = max(maxTree[node * 2], maxTree[node * 2 + 1])
    }

    func query(_ node: Int, _ from: Int, _ to: Int, _ left: Int, _ right: Int) -> Pair {
        if left > to || right < from { return (Int.max, 0) }
        if from <= left && right <= to {
            return (minTree[node], maxTree[node])
        }
        
        let tLeft: Pair = query(node * 2, from, to, left, (left + right) / 2)
        let tRight: Pair = query(node * 2 + 1, from, to, (left + right) / 2 + 1, right)
        return (Int(min(tLeft.0, tRight.0)), Int(max(tLeft.1, tRight.1)))
    }

    let ip = readInput()
    let (N, M) = (ip[0], ip[1])
    (0..<N).forEach { _ in
        array.append(readInput().first!)
    }

    let treeSize = 1 << (Int(ceil(log2(Double(N)))) + 1)
    minTree = [Int](repeating: 0, count: treeSize)
    maxTree = minTree
    initTree(1, 0, N-1)
    print((0..<M).reduce(into: [String]()) { ans, _ in
        let ip3 = readInput()
        let (from, to) = (ip3[0], ip3[1])
        let result = query(1, from-1, to-1, 0, N-1)
        ans.append("\(result.0) \(result.1)")
    }.joined(separator: "\n"))
}

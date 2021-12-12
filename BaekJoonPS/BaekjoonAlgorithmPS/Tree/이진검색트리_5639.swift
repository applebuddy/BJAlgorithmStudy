//
//  이진검색트리_5639.swift
//  BaekjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/12/12.
//  Copyright © 2021 MungGu. All rights reserved.
//

/*
var list = [Int]()
var ans = [String]()

extension Array where Element == Int {
    func printPostOrder(_ start: Int, _ end: Int) {
        if start >= end { return }
        else if start == end-1 {
            ans.append("\(self[start])")
            return
        }
        var idx = start + 1
        while idx < end {
            if self[start] < self[idx] {
                break
            }
            idx += 1
        }
        
        self.printPostOrder(start+1, idx)
        self.printPostOrder(idx, end)
        ans.append("\(self[start])")
    }
}

while let ip = readLine(), let N = Int(ip) {
    list.append(N)
}

list.printPostOrder(0, list.count)
print(ans.joined(separator: "\n"))
*/

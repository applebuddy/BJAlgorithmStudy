//
//  수들의합_2268.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/10/12.
//  Copyright © 2021 MungGu. All rights reserved.
//

import Foundation

func boj2268() {
    // 라이노님의 FileIO
    final class FileIO {
        private var buffer:[UInt8]
        private var index: Int
        
        init(fileHandle: FileHandle = FileHandle.standardInput) {
            buffer = Array(fileHandle.readDataToEndOfFile())+[UInt8(0)] // 인덱스 범위 넘어가는 것 방지
            index = 0
        }
        
        @inline(__always) private func read() -> UInt8 {
            defer { index += 1 }
            
            return buffer.withUnsafeBufferPointer { $0[index] }
        }
        
        @inline(__always) func readInt() -> Int {
            var sum = 0
            var now = read()
            var isPositive = true
            
            while now == 10
                    || now == 32 { now = read() } // 공백과 줄바꿈 무시
            if now == 45{ isPositive.toggle(); now = read() } // 음수 처리
            while now >= 48, now <= 57 {
                sum = sum * 10 + Int(now-48)
                now = read()
            }
            
            return sum * (isPositive ? 1:-1)
        }
        
        @inline(__always) func readString() -> String {
            var str = ""
            var now = read()
            
            while now == 10
                    || now == 32 { now = read() } // 공백과 줄바꿈 무시
            
            while now != 10
                    && now != 32 && now != 0 {
                str += String(bytes: [now], encoding: .ascii)!
                now = read()
            }
            
            return str
        }
    }

    let file = FileIO()

    @discardableResult
    func initTree(array: inout [Int], tree: inout [Int], node: Int, start: Int, end: Int) -> Int {
        if start == end {
            tree[node] = array[start]
            return tree[node]
        }
        
        let mid = (start + end) / 2
        tree[node] = initTree(array: &array, tree: &tree, node: node * 2, start: start, end: mid)
            + initTree(array: &array, tree: &tree, node: node * 2 + 1, start: mid+1, end: end)
        return tree[node]
    }

    func updateTree(tree: inout [Int], node: Int, start: Int, end: Int, index: Int, diff: Int) {
        if !(start ... end ~= index) { return }
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

    let (N, M) = (file.readInt(), file.readInt())
    let treeSize = 1 << Int(ceil(log2(Double(N)))+1)
    var tree = [Int](repeating: 0, count: treeSize)
    var array = [Int](repeating: 0, count: N+1)
    initTree(array: &array, tree: &tree, node: 1, start: 0, end: N-1)
    print((0..<M).reduce(into: "") { ans, _ in
        let ip2 = [file.readInt(), file.readInt(), file.readInt()]
        let (c, i, j) = (ip2[0], ip2[1], ip2[2])
        switch c {
        case 1:
            let diff = j-array[i]
            array[i] = j
            updateTree(tree: &tree, node: 1, start: 0, end: N, index: i, diff: diff)
        default:
            var (from, to) = (i, j)
            if from > to {
                swap(&from, &to)
            }
            ans += "\(querySum(tree: &tree, node: 1, start: 0, end: N, left: from, right: to))\n"
        }
    })

}

//
//  풍선터뜨리기_2346.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/08/14.
//  Copyright © 2021 MungGu. All rights reserved.
//

// MARK: - 풍선터뜨리기 2346, modular 활용 문제풀이
/*
let N = Int(readLine()!)!
var list = readLine()!.split(separator: " ")
            .enumerated()
            .map { ($0.offset + 1, Int(String($0.element))!) }
print((0..<N).reduce(into: (cur: 0, answer: "")) { tp, _ in
    let move = list[tp.cur].1
    tp.answer += "\(list[tp.cur].0) "
    list.remove(at: tp.cur)
    if list.isEmpty { return }
    if move > 0 {
        tp.cur = (tp.cur + move - 1) % list.count
    } else {
        tp.cur = (tp.cur + move) % list.count
        if tp.cur < 0 {
            tp.cur = list.count + tp.cur
        }
    }
}.answer)
*/

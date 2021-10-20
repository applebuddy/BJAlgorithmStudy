//
//  가장긴증가하는부분수열_11053.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/09/24.
//  Copyright © 2021 MungGu. All rights reserved.
//

import Foundation

func boj_11053() {
    let readInput: (() -> [Int]) = {
        var result: [Int] = []
        var temp = 0
        var isMinus = false
        for char in readLine()! {
            if char == " " {
                result.append(temp * (isMinus ? -1 : 1))
                temp = 0
                isMinus = false
                continue
            } else if char == "-" {
                isMinus = true
                continue
            }
            
            temp = temp * 10 + Int(char.asciiValue!) - 48
        }
        result.append(temp * (isMinus ? -1 : 1))
        return result
    }
    
    let N = readInput().first!
    let G = readInput()
    var cache = [Int](repeating: 0, count: N)
    
    print((0..<G.count).reduce(into: 0) { ans, idx in
        cache[idx] = 1
        for jdx in 0..<idx {
            if G[jdx] < G[idx] && cache[idx] <= cache[jdx] {
                cache[idx] = cache[jdx] + 1
            }
        }
        ans = ans < cache[idx] ? cache[idx] : ans
    })
}

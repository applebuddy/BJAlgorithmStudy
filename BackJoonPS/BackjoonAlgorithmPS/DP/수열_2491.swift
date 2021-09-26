//
//  수열_2491.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/09/25.
//  Copyright © 2021 MungGu. All rights reserved.
//

func boj2491() {
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
    var count = (1, 1)
    var prev = 0
    print(readInput().enumerated().reduce(into: 1) { (ans, tp) in
        let idx = tp.0
        let num = tp.1
        if idx == 0 { prev = num; return }
        if prev < num {
            count.1 += 1
            count.0 = 1
        } else if prev > num {
            count.1 = 1
            count.0 += 1
        } else if prev == num {
            count.0 += 1
            count.1 += 1
        }
        
        prev = num
        ans = max(ans, max(count.0, count.1))
    })

}

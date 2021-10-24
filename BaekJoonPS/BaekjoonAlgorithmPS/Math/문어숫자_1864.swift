//
//  문어숫자_1864.swift
//  BaekjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/10/25.
//  Copyright © 2021 MungGu. All rights reserved.
//

func boj1864() {
    func npow(_ n: Int, _ k: Int) -> Int {
        var K = k
        var flag = n
        var result = 1
        while K > 0 {
            if K % 2 == 0 {
                flag *= flag
                K /= 2
            } else {
                result *= flag
                K -= 1
            }
        }
        return result
    }

    while true {
        let g = readLine()!
        let cnt = g.count
        if g == "#" { break }
        print(g.enumerated().reduce(into: 0) { ans, tp in
            let i = tp.offset
            let char = tp.element
            var res = 0
            switch char {
            case "-":
                res = 0
            case "\\":
                res = 1
            case "(":
                res = 2
            case "@":
                res = 3
            case "?":
                res = 4
            case ">":
                res = 5
            case "&":
                res = 6
            case "%":
                res = 7
            case "/":
                res = -1
            default:
                break
            }
            ans += res * npow(8, cnt-i-1)
        })
    }
}

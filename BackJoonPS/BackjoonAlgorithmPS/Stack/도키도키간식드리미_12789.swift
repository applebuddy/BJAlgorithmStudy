//
//  도키도키간식드리미_12789.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/10/03.
//  Copyright © 2021 MungGu. All rights reserved.
//

func boj12789() {
    @discardableResult
    func readInput() -> [Int] {
        var temp = 0
        var result: [Int] = []
        readLine()!.forEach { char in
            if char == " " {
                result.append(temp)
                temp = 0
                return
            }
            
            temp = temp * 10 + Int(char.asciiValue!) - 48
        }
        result.append(temp)
        return result
    }

    func solve() -> Bool {
        let N = readInput().first!
        let G = readInput()
        var stack: [Int] = []
        var target = 1
        G.forEach { num in
            while stack.isEmpty == false, stack.last! == target {
                stack.removeLast()
                target += 1
            }
            
            if num == target {
                target += 1
            } else {
                stack.append(num)
            }
        }

        if target == N + 1 { return true }
        if stack.count != N - target + 1 { return false }
        for num in (target...N) {
            if stack.isEmpty
                || stack.last! != num { return false }
            stack.removeLast()
        }
        
        return true
    }

    print(solve() ? "Nice" : "Sad")

}

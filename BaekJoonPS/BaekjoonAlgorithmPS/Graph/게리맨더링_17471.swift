//
//  게리맨더링_17471.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/10/02.
//  Copyright © 2021 MungGu. All rights reserved.
//

import Foundation

func boj17471() {
    let readInput: (() -> [Int]) = {
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
    
    let N = readInput().first!
    var population = [0]
    var visitCnt = 0
    population += readInput()
    var perm = [Int](repeating: 0, count: N+1)
    var G = [[Int]](repeating: [Int](), count: N+1)
    var Ans = Int.max
    
    // 1) DFS로 조합을 돌린다.
    // 2) 2개의 구역으로 나뉘는지 체크한다.
    // 3) 인구수 차이를 계산하여 최솟값과 대조한다.
    func DFS(_ idx: Int, _ pickCnt: Int) {
        if pickCnt >= 1 {
            let result = checkPopulation()
            if result >= 0 {
                Ans = Ans > result ? result : Ans
                if Ans == 0 { print(0); exit(0) }
            }
        }
        
        if idx > N { return }
        for jdx in idx...N {
            perm[jdx] = 1
            DFS(jdx + 1, pickCnt + 1)
            perm[jdx] = 0
        }
    }
    
    var chk = [Bool](repeating: false, count: N+1)
    func checkPopulation() -> Int {
        var divCnt = 0
        var popList = [Int]()
        visitCnt = 0
        chk = [Bool](repeating: false, count: N+1)
        for start in (1...N) {
            if chk[start] { continue }
            let pop = BFS(start: start)
            divCnt += 1
            if divCnt > 2 { return -1 }
            if pop >= 0 {
                popList.append(pop)
            }
        }
        
        if divCnt != 2 || visitCnt != N { return -1 }
        var diff = popList[0] - popList[1]
        diff = diff > 0 ? diff : diff * -1
        return diff
    }
    
    func BFS(start: Int) -> Int {
        var popResult = population[start]
        var queue: [Int] = [start]
        chk[start] = true
        visitCnt += 1
        var cur = 0
        while cur < queue.count {
            let now = queue[cur]
            cur += 1
            G[now].forEach { next in
                if chk[next] || perm[start] != perm[next] { return }
                chk[next] = true
                visitCnt += 1
                popResult += population[next]
                queue.append(next)
            }
        }
        
        return popResult
    }
    
    (1...N).forEach { num in
        let ip3 = readInput()
        ip3[1...].forEach { otherN in
            G[num].append(otherN)
        }
    }
    
    DFS(1, 0)
    print(Ans == Int.max ? -1 : Ans)
}

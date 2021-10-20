//
//  도도의음식준비_22953.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/10/03.
//  Copyright © 2021 MungGu. All rights reserved.
//

func boj22953() {
    let readInput: (() -> [Int]) = {
        var result: [Int] = []
        var temp = 0
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

    let ip = readInput()
    let (N, K, C) = (ip[0], ip[1], ip[2])
    let cookerList = readInput()
    // (최대 음식 조리시간) * (최대 만들어야할 음식 개수)
    let mxTime = Int(1e12)
    var cheerList = [Int](repeating: 0, count: N)
    var ans = mxTime

    func cookTime() -> Int {
        var tCookerList = cookerList
        for idx in cheerList.indices {
            tCookerList[idx] -= cheerList[idx]
            tCookerList[idx] = tCookerList[idx] < 1 ? 1 : tCookerList[idx]
        }

        var (left, right) = (1, mxTime)
        var result = mxTime
        while left <= right {
            let mid = (left + right) / 2
            let cookCnt = tCookerList.reduce(into: 0) { tot, time in
                tot += mid / time
            }
            
            if cookCnt >= K {
                result = mid
                right = mid - 1
            } else {
                left = mid + 1
            }
        }
        return result
    }

    func DFS(_ idx: Int, _ cCnt: Int) {
        if cCnt >= C {
            if cCnt == C {
                let time = cookTime()
                ans = ans > time ? time : ans
            }
            return
        }
        
        for jdx in idx ..< N {
            cheerList[jdx] += 1
            DFS(jdx, cCnt+1)
            cheerList[jdx] -= 1
        }
    }

    DFS(0, 0)
    print(ans)
}

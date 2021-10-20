//
//  이친수_2193.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/14.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 이친수 2193 + 복습 1회

import Foundation

func boj2193() {
    let N = Int(readLine()!)!
    var cache = [[Int]](repeating: [Int](repeating: 0, count: 2), count: N+1)

    func solve(_ n: Int) -> [Int] {
        cache[1][1] = 1
        if n == 1 {
            return cache[1]
        }
        
        for idx in 2...n {
            cache[idx][0] = cache[idx-1][0] + cache[idx-1][1]
            cache[idx][1] = cache[idx-1][0]
        }
        
        return cache[n]
    }

    print(solve(N).reduce(0, +))
}

/*
 import Foundation

 var DP = [[Int]](repeating: [Int](repeating: 0, count: 2), count: 91)

 func getTwoFNum(_ N: Int) -> Int {
 DP[1][1] = 1;
 if N == 1 { return 1 }
 for i in 2...N {
     DP[i][0] = DP[i-1][0] + DP[i-1][1]
     DP[i][1] = DP[i-1][0]
 }

 return DP[N][0] + DP[N][1]
 }

 let N = Int(readLine()!)!
 print(getTwoFNum(N))
 */

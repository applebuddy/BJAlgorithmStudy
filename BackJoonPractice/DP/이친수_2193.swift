//
//  이친수_2193.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/14.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 이친수 2193
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

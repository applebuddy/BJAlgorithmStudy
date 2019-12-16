//
//  2xn타일링_11726.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/14.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 2xn타일링 11726

/*
 import Foundation

 var DPV = [Int](repeating: 0, count: 1001)

 func DP(_ N: Int) -> Int
 {
 if N <= 1 { return 1 }
 if DPV[N] > 0 { return DPV[N] }
 DPV[N] = DP(N-1) + DP(N-2);
 return DPV[N] % 10007
 }

 let N = Int(readLine()!)!
 print(DP(N))
 */

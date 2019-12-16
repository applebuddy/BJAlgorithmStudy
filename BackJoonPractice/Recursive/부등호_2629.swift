//
//  부등호_2629.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/16.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 부등호 2529

import Foundation

func solve() {
    let K = Int(readLine()!)!
    var mV = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
    var MV = [9, 8, 7, 6, 5, 4, 3, 2, 1, 0]
    let CV = readLine()!.split(separator: " ").map { String($0) }

    for i in 0 ..< K {
        for j in 0 ..< K - i {
            if CV[j] == ">" {
                if mV[j] < mV[j + 1] { mV.swapAt(j, j + 1) }
                if MV[j] < MV[j + 1] { MV.swapAt(j, j + 1) }
            } else {
                if mV[j] > mV[j + 1] { mV.swapAt(j, j + 1) }
                if MV[j] > MV[j + 1] { MV.swapAt(j, j + 1) }
            }
        }
    }

    var mxAns = "", miAns = ""
    for i in 0 ..< K + 1 {
        mxAns += "\(MV[i])"
        miAns += "\(mV[i])"
    }

    print("\(mxAns)\n\(miAns)")
}

/*
 solve()
 */

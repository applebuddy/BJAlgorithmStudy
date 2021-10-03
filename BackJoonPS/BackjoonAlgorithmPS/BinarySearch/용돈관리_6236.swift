//
//  용돈관리_6236.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/10/03.
//  Copyright © 2021 MungGu. All rights reserved.
//

func boj6236() -> Int {
    let ip = readLine()!.split(separator: " ").map { Int(String($0))! }
    let (N, M) = (ip[0], ip[1])
    var G = [Int]()
    var Ans = 0

    let totPrice = (0..<N).reduce(into: 0) { totPrice, _ in
        let price = Int(readLine()!)!
        G.append(price)
        totPrice += price
    }

    var (left, right) = (1, totPrice)
    var K = 0

    func check() -> Bool {
        var mCnt = 1
        var money = K
        for price in G {
            if K < price { return false }
            if money < price {
                money = K
                mCnt += 1
            }
            money -= price
        }
        // K원 인출이 반드시 필요할때 인출하는 횟수가 M번을 초과할 경우 불가능
        return M >= mCnt
    }

    while left <= right {
        K = (left + right) / 2
        
        if check() {
            Ans = K
            right = K - 1
        } else {
            left = K + 1
        }
    }

    return Ans
}

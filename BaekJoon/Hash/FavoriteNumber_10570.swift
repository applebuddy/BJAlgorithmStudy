//
//  FavoriteNumber_10570.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/14.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - Favorite Number 10570
// MARK: Hash 문제풀이
/*
import Foundation

let N = Int(readLine()!)!

for _ in 0..<N {
    let V = Int(readLine()!)!
    var dic = [Int:Int]()
    for _ in 0..<V {
        let num = Int(readLine()!)!
        dic[num] = (dic[num] ?? 0) + 1
    }
    
    let Ans = dic.sorted { $0.value > $1.value || ($0.value == $1.value && $0.key < $1.key) }[0].key
    print(Ans)
}
*/

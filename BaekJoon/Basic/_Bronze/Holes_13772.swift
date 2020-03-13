//
//  Holes_13772.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/09.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - Holes_13772
// MARK: swift 문제풀이

/*
let key = [1,2,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0]
let N = Int(readLine()!)!
for _ in 0..<N {
    let arr = Array(readLine()!)
    var Ans = 0
    for i in arr.indices {
        if arr[i] == " " { continue }
        let hole = key[Int(arr[i].unicodeScalars.first!.value)-65]
        Ans += hole
    }
    print(Ans)
}
*/

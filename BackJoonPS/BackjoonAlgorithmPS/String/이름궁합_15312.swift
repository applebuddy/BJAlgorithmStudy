//
//  이름궁합_15312.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/08.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 이름궁함 15312
// MARK: swift 문제풀이

/*
import Foundation

let key = [3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1]
let arr = Array(readLine()!).map { key[Int($0.unicodeScalars.first!.value) - 65] }
let arr2 = Array(readLine()!).map { key[Int($0.unicodeScalars.first!.value) - 65] }

var sArr = [Int]()
for i in arr.indices {
    sArr.append(arr[i])
    sArr.append(arr2[i])
}

for i in 0..<sArr.count-2 {
    for j in 0..<sArr.count-1-i {
        sArr[j] = (sArr[j] + sArr[j+1]) % 10
    }
}

print("\(sArr[0])\(sArr[1])")
*/

//
//  Yonsei-TOTO_12018.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/02.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - Yonsei-TOTO
// MARK: sort swift 문제풀이

/*
import Foundation

let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], P = arr[1]
var PV = [Int]()
for _ in 0..<N {
    let arr2 = readLine()!.split(separator: " ").map { Int($0)! }
    let applicant = arr2[0]
    let cut = arr2[1]
    let arr3 = readLine()!.split(separator: " ").map { Int($0)! }.sorted()
    
    if applicant < cut { PV.append(1); continue }
    
    let need = arr3[applicant-cut]
    
    PV.append(need)
}

PV.sort()

var sum = 0, Ans = 0
for i in PV.indices {
    sum += PV[i]
    if sum <= P { Ans += 1 }
    else { break }
}

print(Ans)
*/

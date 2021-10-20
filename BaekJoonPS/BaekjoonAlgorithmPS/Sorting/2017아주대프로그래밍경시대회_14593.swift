//
//  2017아주대프로그래밍경시대회_14593.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/07.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 2017아주대프로그래밍경시대회 14593
// MARK: swift 문제풀이

/*
import Foundation

let T = Int(readLine()!)!
var applicant = [[Int]](repeating: [Int](), count: T)
for i in 0..<T {
    applicant[i] = readLine()!.split(separator: " ").map { Int($0)! }
    applicant[i].append(i+1)
}

applicant.sort { $0[0] > $1[0] || ($0[0]==$1[0] && $0[1] < $1[1]) || ($0[0]==$1[0] && $0[1]==$1[1] && $0[2] < $1[2]) }
print(applicant[0].last!)
*/

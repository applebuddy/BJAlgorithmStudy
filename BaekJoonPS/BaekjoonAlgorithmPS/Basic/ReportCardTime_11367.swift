//
//  ReportCardTime_11367.swift
//  BaekjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/11/22.
//  Copyright © 2021 MungGu. All rights reserved.
//

import Foundation

func boj_11367() {
    let N = Int(readLine()!)!
    print((0..<N).reduce(into: [String]()) { result, _ in
        let ip = readLine()!.split(separator: " ").map { String($0) }
        let score = Int(ip[1])!
        var grade = ""
        switch score {
        case 97...100:
            grade = "A+"
        case 90...96:
            grade = "A"
        case 87...89:
            grade = "B+"
        case 80...86:
            grade = "B"
        case 77...79:
            grade = "C+"
        case 70...76:
            grade = "C"
        case 67...69:
            grade = "D+"
        case 60...66:
            grade = "D"
        default:
            grade = "F"
        }
        
        result.append("\(ip[0]) \(grade)")
    }.joined(separator: "\n"))
}

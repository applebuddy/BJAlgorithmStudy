//
//  4와7_2877.swift
//  BaekjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/10/24.
//  Copyright © 2021 MungGu. All rights reserved.
//

func boj2877() {
    var binary = ""
    let K = Int(readLine()!)!
    var tK = K+1
    while tK > 0 {
        binary = "\(tK%2)" + binary
        tK/=2
    }

    print(binary.enumerated().reduce(into: "") { ans, tp in
        let idx = tp.offset
        let char = tp.element
        ans += "\(idx == 0 ? "" : (char == "0" ? "4" : "7"))"
    })

}

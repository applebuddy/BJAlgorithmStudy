//
//  Patyki_8723.swift
//  BaekjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/11/25.
//  Copyright © 2021 MungGu. All rights reserved.
//

import Foundation

func boj_8723() {
    let ip = readLine()!.split(separator: " ").map { Int(String($0))! }.sorted()
    let (a, b, c) = (ip[0], ip[1], ip[2])
    var result = 0

    if (a * a) + (b * b) == (c * c) {
        result = 1
    }

    if a == b && b == c {
        result = 2
    }

    print(result)
}

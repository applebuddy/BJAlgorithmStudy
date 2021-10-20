//
//  줄어들지않아_2688.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/01/03.
//  Copyright © 2021 MungGu. All rights reserved.
//

/*
let ip = { Int(readLine()!)! }
let len = 65

// 각 테스트 별 최대 입력값 : 65, DP[i][j] : i번째 자리에 j 숫자가 놓이는 모든 경우의 수
var DP = [[Int]](repeating: [Int](repeating: 0, count: 10), count: len)

(1...DP.count-1).forEach { idx in
    var sum = 0
    DP[idx].indices.forEach { jdx in
        if idx == 1 {
            // 1자리 수일 경우 각각의 숫자가 놓이는 경우의 수는 1입니다.
            DP[idx][jdx] = 1
        } else {
            // N자리 수일 경우 각각의 숫자가 놓이는 경우의 수는 N-1자리 수 끝에 0 ~ jdx의 숫자가 놓이는 모든 경우의 수의 합 입니다.
            // * DP[idx][jdx] : idx자리 수의 끝에 jdx 숫자가 놓이는 모든 경우의 수
            // * 0 ~ jdx의 숫자가 놓이는 모든 경우의 수의 합 : DP[idx-1][jdx] + sum
            DP[idx][jdx] = DP[idx-1][jdx] + sum
            sum += DP[idx-1][jdx]
        }
    }
}

let T = ip()
(0..<T).forEach { _ in
    let N = ip()
    print(DP[N].reduce(0, +))
}
*/

//
//  다리놓기_1010.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/09/26.
//  Copyright © 2021 MungGu. All rights reserved.
//

import Foundation

func boj1010() {
    let readInput: (() -> [Int]) = {
      var result: [Int] = []
      var temp = 0
      readLine()!.forEach {
        if $0 == " " {
          result.append(temp)
          temp = 0
          return
        }

        temp = temp * 10 + Int($0.asciiValue!) - 48
      }
      result.append(temp)
      return result
    }

    let N = readInput().first!
    (0..<N).forEach { _ in
        let ip2 = readInput()
        let (L, R) = (ip2[0], ip2[1])
        // 좌측 i개, 우측 j개가 있을때 다리를 놓을 수 있는 경우의 수
        var cache = [[Int]](repeating: [Int](repeating: 0, count: R+1), count: L+1)
        (1...R).forEach { num in
            // 좌측 1개, 우측 num개일때 다리놓을 수 있는 경우의 수는 num개
            cache[1][num] = num
        }
        
        if L == 1 {
            print(R); return
        }
        
        (2...L).forEach { idx in
            (idx...R).forEach { jdx in
                (idx...jdx).forEach { kdx in
                    cache[idx][jdx] += cache[idx-1][kdx-1]
                }
                if idx == L && jdx == R { print(cache[idx][jdx]) }
            }
        }
    }

}

//
//  반복수열_2331.swift
//  BaekjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/12/25.
//  Copyright © 2021 MungGu. All rights reserved.
//

/*
extension Int {
    func customPow(cnt: Int) -> Int {
        var result = 1
        var cnt = cnt
        var flag = self
        while cnt > 0 {
            if cnt % 2 == 0 {
                flag *= flag
                cnt /= 2
            } else {
                result *= flag
                cnt -= 1
            }
        }
        return result
    }
}

func boj_2331() {
    let ip = readLine()!.split(separator: " ").map { Int(String($0))! }
    let (A, P) = (ip[0], ip[1])
    var dic = [0, 1]
    var dic2 = [Int: Int]()

    (2...9).forEach { num in
        dic.append(num.customPow(cnt: P))
    }

    var value = A
    var cnt = 1
    var lastIdx = 0
    dic2[value] = 0
    while true {
        var result = 0
        while value > 0 {
            result += dic[value % 10]
            value /= 10
        }
        
        if dic2[result] != nil {
            print(dic2[result]!)
            break
        }
        
        dic2[result] = cnt
        value = result
        cnt += 1
    }

}
*/

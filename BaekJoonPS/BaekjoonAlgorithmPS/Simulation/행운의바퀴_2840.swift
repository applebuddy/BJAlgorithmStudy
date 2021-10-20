//
//  행운의바퀴_2840.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/10/03.
//  Copyright © 2021 MungGu. All rights reserved.
//

import Foundation

func boj2840() {
    let ip = readLine()!.split(separator: " ").map { Int(String($0))! }
    let (N, K) = (ip[0], ip[1])
    let defaultChar = "-"
    var wheel = [String](repeating: defaultChar, count: N)
    var cur = 0
    
    func canDecide() -> Bool {
        var dic = [String: Int]()
        for _ in (0..<K) {
            let ip2 = readLine()!.split(separator: " ")
            let (S, char) = (Int(String(ip2[0]))!, "\(ip2[1])")
            cur -= S % N
            if cur < 0 { cur = N + cur }
            if wheel[cur] != defaultChar, "\(wheel[cur])" != char {
                return false
            }
            
            if dic[char] != nil && dic[char] != cur {
                return false
            }
            dic[char] = cur
            wheel[cur] = char
        }
        return true
    }
    
    print(canDecide() ? (0..<N).reduce(into: "") { ans, idx in
        let nowChar = wheel[(cur + idx) % N]
        ans += nowChar == defaultChar ? "?" : nowChar
    } : "!")
}

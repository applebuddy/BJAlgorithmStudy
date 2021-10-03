//
//  병든나이트_1783.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/10/03.
//  Copyright © 2021 MungGu. All rights reserved.
//

func boj1783() {
    let ip = readLine()!.split(separator: " ").map { Int(String($0))! }
    var (N, M) = (ip[0], ip[1])
    
    func solve() -> Int {
        // 1) 세로 1일때에는 더이상 갈 곳이 없다.
        if N <= 1 { return 1 }
        // 2) N이 2일 때에는 dx[2], dx[3] 이동방식으로만 이동 가능하다. + 4가지 방법 사용 불가로 최대 4번
        if N == 2 {
            return min(4, (M + 1) / 2)
        }
        // 3) N >= 3, M < 7일 때에는 dx[0], dx[2] 방식으로 총 M만큼 방문 가능하다. + 4가지 방법 사용 불가로 최대 4번
        if N >= 3 && M < 7 {
            return min(4, M)
        }
        
        // 4) 7칸 이상부터는 4가지 방법 사용이 가능하다.
        // -> N <= 7 범위에서 4가지 방법을 모두 사용해서 총 5번의 방문(+ 5)
        // N <= 7 이후 추가 세로 길이만큼 방문 가능(M - 7)
        return M - 7 + 5
    }
    
    print(solve())
}

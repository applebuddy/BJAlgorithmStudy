//
//  음식평론가_1188.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 26/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 음식평론가
/// N개의 소세지를 M명에게 동등하게 나누어 주려면 필요한 최소한의 칼질은 몇번일까요??
/// * 이해필요...
#if 0
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int getGCD(int a, int b) {
    if(b==0) return a;
    return getGCD(b,a%b);
}

int solve() {
    int N,M;
    cin >> N >> M;
    return M-getGCD(N,M);
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    int Ans = solve();
//    printf("%d\n",Ans);
//    return 0;
//}
#endif 

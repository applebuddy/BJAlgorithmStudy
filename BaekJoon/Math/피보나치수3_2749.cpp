//
//  피보나치수3_2749.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/26.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: TLE 답안 -> 행렬제곱 알고리즘 공부 필요

#if 0
#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    ll pp=1, p=1, now=0;
    ll N; cin>>N;
    if(N<=2) return !printf("%d\n",1);
    for(int i=3; i<=N; i++) {
        now = (p + pp) % 1000000;
        pp = p;
        p = now;
    }
    
    printf("%lld\n",now);
    return 0;
}
#endif


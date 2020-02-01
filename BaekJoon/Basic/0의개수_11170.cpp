//
//  0의개수_11170.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/02.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 0의개수_11170

// MARK: - 문제풀이
#if 0
#include <iostream>
using namespace std;

int checkNum(int N) {
    if(N==0) return 1;
    int cnt=0;
    while(N>0) {
        cnt += N%10==0 ? 1 : 0;
        N/=10;
    }
    return cnt;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        int N,M; cin>>N>>M;
        int Ans=0;
        for(int i=N; i<=M; i++) {
            Ans += checkNum(i);
        }
        printf("%d\n",Ans);
    }
    return 0;
}
#endif

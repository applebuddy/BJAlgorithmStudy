//
//  삼각수의합_2721.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 10/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 삼각수의 합_2721
#if 0
#include <iostream>
#include <string.h>
using namespace std;

long long Cache[300];

long long getTriangleNumber(int N) {
    if(N==1) return 1;
    if(N==2) return 3;
    if(Cache[N]>0) return Cache[N];
    Cache[N] = getTriangleNumber(N-1)+N;
    return Cache[N];
}

void sumOfTheTriangleNumber() {
    memset(Cache,0,sizeof(Cache));
    int T; cin>>T;
    while(T--) {
        int N; cin>>N;
        long long Ans = getTriangleNumber(N+1)*(getTriangleNumber(N+1)-1)/2;
        printf("%lld\n",Ans);
    }
    return;
}


int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    sumOfTheTriangleNumber();
    return 0;
}

#endif

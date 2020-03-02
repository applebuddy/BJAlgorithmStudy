//
//  알약_4811.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 28/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 알약
#if 0
#include <iostream>
using namespace std;

long long DP[31][31]={0};
long long go(int W, int H) {
    if(DP[W][H]>0) return DP[W][H];
    if(W==0) return 1;
    DP[W][H]=go(W-1,H+1);
    if(H>0) DP[W][H]+=go(W,H-1);
    return DP[W][H];
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    while(1) {
        int N; cin>>N;
        if(N==0) break;
        printf("%lld\n",go(N,0));
    }
    return 0;
}
#endif

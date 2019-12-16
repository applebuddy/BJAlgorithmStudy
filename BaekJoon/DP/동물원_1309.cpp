//
//  동물원_1309.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 29/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 동물원
#if 0
#include <iostream>
#include <vector>
using namespace std;

void theZoo() {
    int N; cin>>N;
    vector<unsigned long long> DP(N+1);
    if(N==1) return !printf("%d\n",3);
    if(N==2) return !printf("%d\n",5+2);
    DP[1]=3;
    DP[2]=7;
    for(int i=3; i<=N; i++) DP[i]=(DP[i-1]*2+DP[i-2])%9901;
    
    printf("%lld\n",DP[N]);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theZoo();
    return 0;
}
#endif

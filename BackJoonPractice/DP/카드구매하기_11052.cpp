//
//  카드구매하기_11052.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/09.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - 카드구매하기_11052
#if 0
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> DP(1001,0);

int go(int N, vector<int> &P) {
    if(N<1) return 0;
    else if(DP[N]>0) return DP[N];
    for(int i=1; i<=fmin(N,P.size()-1); i++) {
        DP[N] = fmax(P[i]+go(N-(i),P), DP[N]);
    }
    return DP[N];
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    vector<int> P(N+1,0);
    for(int i=1; i<=N; i++) {
        int num; cin>>num;
        P[i] = num;
    }
    
    printf("%d\n",go(N, P));
    return 0;
}
#endif

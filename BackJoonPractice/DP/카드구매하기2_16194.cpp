//
//  카드구매하기2_16194.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/10.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - 카드구매하기2_16194

#include <iostream>
#include <vector>
#include <cmath>
#define INF 123456789
using namespace std;

vector<int> DP(1001,INF);

int GO(int N, vector<int> &PV) {
    if(N < 1) return 0;
    if(DP[N]>0 && DP[N] != INF) return DP[N];
    for(int i=1; i<=min((int)PV.size(),N); i++) {
        DP[N] = min(GO(N-i, PV)+PV[i], DP[N]);
    }
    return DP[N];
}

int main() {
    ios_base::sync_with_stdio(); cin.tie(0);
    int N; cin>>N;
    vector<int> PV(N+1,0);
    for(int i=1; i<=N; i++) cin>>PV[i];
    printf("%d\n",GO(N, PV));
    return 0;
}


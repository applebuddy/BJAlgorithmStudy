
//
//  계단오르기_2579.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 16/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 계단오르기_2579
#if 0
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> Cache(301,0);
vector<int> V(301,0);

void ascendingStairs() {
    int N; cin>>N;
    int Ans = 0;
    for(int i=0; i<N; i++) cin>>V[i];
    if(N==0) Ans = V[N];
    else if(N==1) Ans = max(V[N],V[N-1]+V[N]);
    else if(N==2) Ans = max(V[0]+V[2], V[1]+V[2]);
    else {
        Cache[0] = V[0];
        Cache[1] = max(V[0]+V[1],V[1]);
        Cache[2] = max(V[0]+V[2],V[1]+V[2]);
        for(int i=3; i<N; i++) Cache[i] = max(Cache[i-2]+V[i], Cache[i-3]+V[i-1]+V[i]);
    }
    printf("%d\n",Cache[N-1]);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    ascendingStairs();
    return 0;
}
#endif

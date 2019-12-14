//
//  가장긴바이토닉부분수열_11054.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/13.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 가장 긴 바이토닉 부분 수열 11054

#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    vector<int> V(N,0);
    vector<int> DP(N,1);
    vector<int> rDP(N,1);
    int Ans=0;
    for(int i=0; i<N; i++) cin>>V[i];
    for(int i=1; i<N; i++) {
        for(int j=0; j<i; j++) {
            if(V[j]<V[i] && DP[i]<DP[j]+1) {
                DP[i]=DP[j]+1;
            }
        }
    }
    reverse(V.begin(), V.end());
    for(int i=1; i<N; i++) {
        for(int j=0; j<i; j++) {
            if(V[j]<V[i] && rDP[i]<rDP[j]+1) {
                rDP[i]=rDP[j]+1;
            }
        }
    }
    reverse(rDP.begin(), rDP.end());
    
    for(int i=0; i<DP.size(); i++) Ans = (DP[i]+rDP[i]-1) > Ans ? (DP[i]+rDP[i]-1) : Ans;
    printf("%d\n",Ans);
    return 0;
}
#endif

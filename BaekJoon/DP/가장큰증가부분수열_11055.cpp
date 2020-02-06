//
//  가장큰증가부분수열_11055.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/13.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 가장 큰 증가 부분수열 11055

// MARK: - 복습 문제풀이

#if 0
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    int Ans=0;
    vector<int> V(N,0);
    vector<int> DP(N,1);
    vector<int> DP2(N,0);
    for(int i=0; i<N; i++) {
        cin>>V[i];
        DP2[i] = V[i];
        Ans = V[i] > Ans ? V[i] : Ans;
    }
    
    for(int i=1; i<N; i++) {
        for(int j=0; j<i; j++) {
            if(V[j] < V[i] && DP[i] < DP[j]+1) {
                DP[i] = DP[j]+1;
                DP2[i] = max(DP2[i],DP2[j]+V[i]);
                Ans = DP2[i] > Ans ? DP2[i] : Ans;
            }
        }
    }

    printf("%d\n",Ans);
    return 0;
}
#endif

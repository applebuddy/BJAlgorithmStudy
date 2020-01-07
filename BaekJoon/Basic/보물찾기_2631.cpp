//
//  보물찾기_2631.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/01/01.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 보물찾기 문제풀이
#if 0
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N, K; cin>>N>>K;
    int Ans = 0;
    vector<int> V(N+1,0);
    for(int i=1; i<=N; i++) {
        cin>>V[i];
        V[i] += V[i-1];
    }
    
    for(int i=0; i<=N; i++) {
        for(int j=i; j<=N; j++) {
            if(V[j]-V[i]>K) break;
            if(V[j]-V[i]==K) Ans++;
        }
    }
    
    printf("%d\n",Ans);
    return 0;
}
#endif

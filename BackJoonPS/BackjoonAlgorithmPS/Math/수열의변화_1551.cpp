//
//  수열의변화_1551.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/16.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 수열의변화_1551

#if 0
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N,K; cin>>N>>K;
    string S; cin>>S;
    vector<int> V;
    int idx=0;
    while(!S.empty() && idx!=S.length()) {
        if(S[idx]==',') {
            V.push_back(stoi(S.substr(0,idx)));
            S = S.substr(idx+1);
            idx=0;
        } else idx++;
    }
    
    V.push_back(stoi(S));
    
    for(int i=0; i<K; i++) {
        for(int j=0; j<N-i-1; j++) V[j] = V[j+1]-V[j];
    }
    
    for(int i=0; i<N-K; i++) {
        printf("%d",V[i]);
        if(i!=N-K-1) printf(",");
    }
    puts("");
    
    return 0;
}
#endif

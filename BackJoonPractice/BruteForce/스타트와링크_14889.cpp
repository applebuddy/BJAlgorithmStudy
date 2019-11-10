//
//  스타트와링크_14889.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 10/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 스타트와링크_14889
#if 0
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    int Ans = 1000000000;
    vector<int> V(N,0);
    vector<vector<int>> SV(N,vector<int>(N,0));
    for(int i=N/2; i<N; i++) {
        V[i] = 1;
    }
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cin>>SV[i][j];
        }
    }
    
    do {
        vector<int> AV;
        vector<int> BV;
        int aScore=0, bScore=0;
        for(int i=0; i<N; i++) {
            if(V[i]==0) AV.push_back(i);
            else BV.push_back(i);
        }
        
        for(int i=0; i<AV.size(); i++) {
            for(int j=0; j<AV.size(); j++) {
                if(i==j) continue;
                aScore += SV[AV[i]][AV[j]];
            }
        }
        
        for(int i=0; i<BV.size(); i++) {
            for(int j=0; j<BV.size(); j++) {
                if(i==j) continue;
                bScore += SV[BV[i]][BV[j]];
            }
        }
        
        if(Ans > abs(bScore-aScore)) Ans = abs(bScore-aScore);
    }while(next_permutation(V.begin(), V.end()));
    printf("%d\n",Ans);
    return 0;
}
#endif

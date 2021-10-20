//
//  최후의승자는누구?_12760.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/16.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 최후의 승자는 누구? 12760

#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N,K; cin>>N>>K;
    vector<vector<int>> V(N,vector<int>(K,0));
    vector<pair<int,int>> PV;
    vector<int> MV(K,0);
    for(int i=0; i<N; i++) {
        for(int j=0; j<K; j++) {
            cin>>V[i][j];
        }
        sort(V[i].begin(), V[i].end());
        for(int j=0; j<K; j++) MV[j] = V[i][j] > MV[j] ? V[i][j] : MV[j];
    }
    
    for(int i=0; i<N; i++) {
        int score = 0;
        for(int j=0; j<K; j++) {
            if(MV[j] == V[i][j]) score++;
        }
        PV.push_back({i+1,score});
    }
    
    sort(PV.begin(), PV.end(), [](pair<int,int> &a, pair<int,int> &b) {
        return a.second > b.second || (a.second == b.second && a.first < b.first);
    });
    
    int maxScore = PV.front().second;
    for(int i=0; i<PV.size(); i++) {
        if(PV[i].second != maxScore) break;
        printf("%d ",PV[i].first);
    }
    
    return 0;
}
#endif

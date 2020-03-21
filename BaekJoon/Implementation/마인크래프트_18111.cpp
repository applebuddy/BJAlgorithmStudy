//
//  마인크래프트_18111.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/26.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

#if 0
#include <iostream>
#include <vector>
#include <set>
#include <queue>
using namespace std;
typedef long long ll;

int main() {
    ll N,M,K; cin>>N>>M>>K;
    vector<vector<ll>> V(N, vector<ll>(M,0));
    set<ll> ST;
    priority_queue<ll> PQ;
    pair<ll,ll> Ans = {0, 2e12};
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin>>V[i][j];
            ST.insert(V[i][j]);
            Ans.first = Ans.first < V[i][j] ? V[i][j] : Ans.first;
        }
    }

    if(ST.size() == 1) return !printf("%d %lld\n",0, Ans.first);
    for(auto &st: ST) PQ.push(st);
    
    while(!PQ.empty()) {
        ll target = PQ.top();
        printf("%lld\n",target);
        ll nowK = K;
        PQ.pop();
        ll rmCnt=0, mkCnt=0, sec=0;
        
        for(int i=0; i<N; i++) {
            for(int j=0; j<M; j++) {
                if(target < V[i][j]) rmCnt += V[i][j] - target;
            }
        }
        
        for(int i=0; i<N; i++) {
            for(int j=0; j<M; j++) {
                if(target > V[i][j]) mkCnt += target - V[i][j];
            }
        }
        
        sec = rmCnt * 2;
        nowK += rmCnt;
        if(mkCnt <= nowK) sec += mkCnt;
        else continue;
        
        if(Ans.second > sec) {
            Ans.first = target;
            Ans.second = sec;
        }
    }
    
    Ans.second = Ans.second < 2e12 ? Ans.second : 0;
    printf("%lld %lld\n",Ans.second, Ans.first);
    return 0;
}
#endif

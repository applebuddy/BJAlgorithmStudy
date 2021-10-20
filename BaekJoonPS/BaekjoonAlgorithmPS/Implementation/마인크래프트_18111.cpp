//
//  마인크래프트_18111.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/26.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 마인크래프트 18111
// MARK: BruteForce C++ 문제풀이 답안

#if 0
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int X, Y, K;
    cin>>X>>Y>>K;
    int MN = 2e9;
    int MX = 0;
    vector<int> Ans = {int(2e9), 0};
    vector<vector<int>> G(X, vector<int>(Y, 0));
    
    for(int i=0; i<X; i++) {
        for(int j=0; j<Y; j++) {
            cin>>G[i][j];
            MN = MN > G[i][j] ? G[i][j] : MN;
            MX = MX < G[i][j] ? G[i][j] : MX;
        }
    }
    
    for(int k=MN; k<=MX; k++) {
        int box = K;
        int time = 0;
        bool can = true;
        vector<vector<int>> tG = G;
        
        for(int i=0; i<X; i++) {
            for(int j=0; j<Y; j++) {
                if(tG[i][j]>k) {
                    box += (tG[i][j] - k);
                    time += (tG[i][j] - k) * 2;
                    tG[i][j] = k;
                }
            }
        }
        
        if(Ans[0] < time) continue;
        
        for(int i=0; i<X; i++) {
            for(int j=0; j<Y; j++) {
                if(tG[i][j]<k) {
                    box -= (k - tG[i][j]);
                    time += (k - tG[i][j]);
                    tG[i][j] = k;
                    if(box < 0) {
                        can = false;
                        break;
                    }
                }
            }
        }
        
        if(can) {
            if(Ans[0] >= time) {
                Ans[0] = time;
                Ans[1] = k;
            }
        }
    }
    
    printf("%d %d\n",Ans[0], Ans[1]);
}
#endif


// MARK: 풀이실패 답안

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
1

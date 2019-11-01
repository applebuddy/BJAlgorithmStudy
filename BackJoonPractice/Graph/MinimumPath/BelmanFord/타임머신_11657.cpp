//
//  타임머신_11657.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 01/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 타임머신_11657 : SPFA(Shortest Path Faster Algorithm) Problem
#if 0
#include <iostream>
#include <vector>
#include <queue>
#define INF 2100000000
using namespace std;
typedef pair<int,int> Pair;

vector<Pair> G[501];
vector<bool> C(501,false);
vector<int> Cycle(501,0);
vector<int> D(501,INF);
queue<int> Q;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N,M; cin>>N>>M;
    for(int i=0; i<M; i++) {
        int A,B,C; cin>>A>>B>>C;
        G[A].push_back({B,C});
    }
    
    Q.push(1);
    D[1]=0;
    Cycle[1]++;
    
    while(!Q.empty()) {
        int current = Q.front();
        Q.pop();
        C[current]=false;
        
        for(int i=0; i<G[current].size(); i++) {
            int next = G[current][i].first;
            int weight = G[current][i].second;
            
            if(D[current]+weight < D[next]) {
                D[next] = D[current]+weight;
                if(!C[next]) {
                    Cycle[next]++;
                    if(Cycle[next]>=N) {
                        printf("%d\n",-1);
                        return 0;
                    }
                    C[next]=true;
                    Q.push(next);
                }
            }
        }
    }
    
    for(int i=2; i<=N; i++) {
        printf("%d\n",D[i]==INF ? -1 : D[i]);
    }
    return 0;
}
#endif

//
//  여행가자_1976.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 05/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 여행가자_1076
#if 0
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> G[201];
vector<int> C(201,0);
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int N,M; cin>>N>>M;
    vector<int> P(201,0);
    for(int i=1; i<=N; i++) P[i]=i;
    
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=N; j++) {
            int n; cin>>n;
            if(n==1) {
                G[i].push_back(j);
                G[j].push_back(i);
            }
        }
    }
    
    vector<int> path;
    for(int i=0; i<M; i++) {
        int n; cin>>n;
        path.push_back(n);
    }
    
    queue<int> Q;
    Q.push(path.front());
    while(!Q.empty()) {
        int node = Q.front();
        C[node]=1;
        Q.pop();
        for(int i=0; i<G[node].size(); i++) {
            int next = G[node][i];
            if(C[next]==0) {
                C[next]=1;
                Q.push(next);
            }
        }
    }

    for(auto v: path) if(C[v]==0) return !printf("NO\n");
    printf("YES\n");
    return 0;
}
#endif

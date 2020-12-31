//
//  키순서_2458.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 07/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 키순서_2458
#if 0
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<vector<int>> C(501, vector<int>(501,0));
vector<int> G[501];

void BFS(int start) {
    queue<int> Q;
    Q.push(start);
    while(!Q.empty()) {
        int node = Q.front();
        Q.pop();
        for(int i=0; i<G[node].size(); i++) {
            int next = G[node][i];
            if(!C[start][next]) {
                C[start][next]=1;
                C[next][start]=1;
                Q.push(next);
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int N,M; cin>>N>>M;
    int Ans=0;
    for(int i=1; i<=N; i++) C[i][i]=1;
    for(int i=0; i<M; i++) {
        int from,to; cin>>from>>to;
        G[from].push_back(to);
    }
    
    for(int i=1; i<=N; i++) BFS(i);
    for(int i=1; i<=N; i++) {
        bool flag = true;
        for(int j=1; j<=N; j++) {
            if(!C[i][j]) {
                flag = false;
                break;
            }
        }
        if(flag) Ans++;
    }
    
    printf("%d\n",Ans);
    
    return 0;
}
#endif

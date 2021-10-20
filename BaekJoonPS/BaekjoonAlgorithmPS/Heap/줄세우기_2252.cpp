//
//  줄세우기_2252.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 14/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 줄세우기_2252 : 위상정렬 Algorithm Problem
#if 0
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int C[32001] = {0,};
vector<int> G[32001];

void theTopologicalSorting() {
    int N,M; cin>>N>>M;
    queue<int> Q;
    for(int i=0; i<M; i++) {
        int A,B; cin>>A>>B;
        C[B]++;
        G[A].push_back(B);
    }
    
    for(int i=1; i<=N; i++) if(C[i]==0) Q.push(i);
    
    while(!Q.empty()) {
        int node = Q.front();
        printf("%d",node);
        Q.pop();
        for(int i=0; i<G[node].size(); i++) {
            C[G[node][i]]--;
            if(C[G[node][i]]==0) Q.push(G[node][i]);
        }
        if(!Q.empty()) printf(" ");
        else printf("\n");
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theLining();
    return 0;
}
#endif

//
//  파티_1238.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 07/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 파티_1238
//
#if 0
#include <iostream>
#include <vector>
#define INF 1000000000
using namespace std;

vector<vector<int>> G(1001, vector<int>(1001,INF));

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int N,M,X; cin>>N>>M>>X;
    int Ans=0;
    for(int i=0; i<M; i++) {
        int from,to,weight; cin>>from>>to>>weight;
        G[from][to] = weight < G[from][to] ? weight : G[from][to];
    }
    for(int i=1; i<=N; i++) G[i][i]=0;
    
    for(int k=1; k<=N; k++) {
        for(int i=1; i<=N; i++) {
            for(int j=1; j<=N; j++) {
                if(G[i][j] > G[i][k]+G[k][j]) {
                    G[i][j] = G[i][k]+G[k][j];
                }
            }
        }
    }

    for(int i=1; i<=N; i++) {
        int sum = G[i][X]+G[X][i];
        Ans = sum>Ans ? sum : Ans;
    }
    
    printf("%d\n",Ans);
    return 0;
}
#endif

//
//  플로이드_11404.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 31/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 플로이드_11104
#if 0
#include <iostream>
#include <vector>
#define INF 10000000
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N,M; cin>>N>>M;
    vector<vector<int>> V(N+1, vector<int>(N+1,INF));
    for(int i=0; i<M; i++) {
        int from,to,weight; cin>>from>>to>>weight;
        V[from][to] = V[from][to]>weight? weight : V[from][to];
    }
    
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=N; j++) {
            if(i==j) { V[i][j]=0; continue; }
            if(V[i][j]==0) V[i][j]=INF;
        }
    }
    vector<vector<int>> C = V;
    
    for(int k=1; k<=N; k++) {
        for(int i=1; i<=N; i++) {
            for(int j=1; j<=N; j++) {
                if(C[i][j] > C[i][k]+C[k][j]) {
                    C[i][j] = C[i][k]+C[k][j];
                }
            }
        }
    }
    
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=N; j++) {
            if(C[i][j]!=INF) printf("%d",C[i][j]);
            else printf("%d",0);
            if(j!=N) printf(" ");
        }
        puts("");
    }
    return 0;
}
#endif

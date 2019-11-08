//
//  플로이드2_11780.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 05/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 플로이드 복습 (세부경로 출력 미구현)
#if 0
#include <iostream>
#include <vector>
#define INF 100000000
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N,M; cin>>N>>M;
    vector<vector<int>> G(N+1,vector<int>(N+1,INF));
    vector<vector<int>> C;
    vector<vector<int>> P(101,vector<int>());

    for(int i=0; i<M; i++) {
        int from,to,weight; cin>>from>>to>>weight;
        G[from][to]= G[from][to]>weight ? weight : G[from][to];
    }
    for(int i=1; i<=N; i++) {
        G[i][i]=0;
    }
    C=G;
    
    for(int k=1; k<=N; k++) {
        for(int i=1; i<=N; i++) {
            for(int j=1; j<=N; j++) {
                if(C[i][j] > C[i][k] + C[k][j]) {
                    C[i][j] = C[i][k] + C[k][j];
                }
            }
        }
    }
    
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=N; j++) {
            printf("%d",C[i][j]);
            if(j!=N) printf(" ");
        }
        puts("");
    }
    return 0;
}
#endif

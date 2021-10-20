//
//  구간합구하기5_11660.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/29.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 구간합구하기5 11660
// MARK: DP C++ 문제풀이

#if 0
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N,K; cin>>N>>K;
    vector<vector<int>> G(N+1, vector<int>(N+1, 0));
    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++)
            cin>>G[i][j];
    
    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++)
            G[i][j] += G[i-1][j] + G[i][j-1] - G[i-1][j-1];
    
    while(K--) {
        int x,y,x2,y2; cin>>x>>y>>x2>>y2;
        int Ans = G[x2][y2] + G[x-1][y-1] - (G[x2][y-1] + G[x-1][y2]);
        printf("%d\n",Ans);
    }
    return 0;
}
#endif

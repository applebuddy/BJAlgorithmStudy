//
//  행렬제곱_10830.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 01/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 행렬제곱_10830

// 시간초과 답안..
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

void squaredMetrix() {
    long long N,R; cin>>N>>R;
    long long MV[N][N];
    long long Ans[N][N];
    long long temp[N][N];
    
    for(int i=0; i<N; i++) memset(MV[i],0,sizeof(MV[i]));
    for(int i=0; i<N; i++) memset(Ans[i],0,sizeof(Ans[i]));
    for(int i=0; i<N; i++) memset(temp[i],0,sizeof(temp[i]));
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cin >> MV[i][j];
            Ans[i][j] = MV[i][j];
        }
    }
    
    for(int i=0; i<R-1; i++) {
        for(int a=0; a<N; a++) {
            for(int b=0; b<N; b++) {
                for(int k=0; k<N; k++) {
                    long long first = Ans[a][k]%1000==0 ? Ans[a][k]/1000 : Ans[a][k]%1000;
                    long long second = Ans[k][b]%1000==0 ? Ans[k][b]/1000 : Ans[k][b]%1000;
                    temp[a][b] += first * second;
                }
                temp[a][b] = temp[a][b]%1000==0 ? temp[a][b]/1000 : temp[a][b]%1000;
            }
        }
        for(int ti=0; ti<N; ti++)
            for(int tj=0; tj<N; tj++)
                Ans[ti][tj] = temp[ti][tj];
                
        for(int ti=0; ti<N; ti++)
            for(int tj=0; tj<N; tj++)
                temp[ti][tj]=0;
    }
    
    for(int ti=0; ti<N; ti++) {
        for(int tj=0; tj<N; tj++) {
            long long ans = Ans[ti][tj]%1000==0 ? Ans[ti][tj]/1000 : Ans[ti][tj]%1000;
            printf("%lld ",ans);
        }
        printf("\n");
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    squaredMetrix();
//    return 0;
//}

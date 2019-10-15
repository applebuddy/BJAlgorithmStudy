//
//  안전영역_2468.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 15/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 안전영역_2468

#if 0
#include <iostream>
#include <vector>
#include <queue>
#include <string.h>
#define MAX 101
using namespace std;
typedef pair<int,int> Pair;

Pair MIX = {0,0};
int G[MAX][MAX];
int C[MAX][MAX];
int px[] = {0,0,1,-1};
int py[] = {1,-1,0,0};
int CNT = 0;

void BFS(int X, int Y, int W, int G[][MAX], int N) {;
    CNT++;
    C[X][Y]=1;
    queue<Pair> Q;
    Q.push(make_pair(X,Y));
    while(!Q.empty()) {
        Pair node = Q.front();
        int nx = node.first;
        int ny = node.second;
        Q.pop();
        for(int i=0; i<4; i++) {
            int mx = nx+px[i];
            int my = ny+py[i];
            if(mx<0 || mx>=N || my<0 || my>=N) continue;
            if(G[mx][my]<=W || C[mx][my]!=0) continue;
            C[mx][my]=1;
            Q.push({mx,my});
        }
    }
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    int Ans = 0;
    for(int i=0; i<N; i++) memset(G[i],0,sizeof(G[i]));
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cin>>G[i][j];
            MIX.first = MIX.first > G[i][j] ? G[i][j] : MIX.first;
            MIX.second = MIX.second < G[i][j] ? G[i][j] : MIX.second;
        }
    }
    
    for(int W=MIX.first; W<=MIX.second-1; W++) {
        for(int i=0; i<N; i++) memset(C[i],0,sizeof(C[i]));
        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++) {
                if(G[i][j]<=W || C[i][j]==1) continue;
                BFS(i,j,W,G,N);
            }
        }
        Ans = Ans < CNT ? CNT : Ans;
        CNT=0;
    }
    printf("%d\n",Ans);
    return 0;
}
#endif

//
//  안전영역_2468.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 15/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK:  안전영역_2468

// MARK: - 복습 풀이답안; 함수 더 쪼갠 풀이버전
#if 0
#include <iostream>
#include <queue>
using namespace std;
typedef pair<int,int> Pair;

Pair Ans = {0, 1};
int tx[] = {0,0,-1,1};
int ty[] = {-1,1,0,0};

void BFS(int i, int j, vector<vector<int>> &G, const int &height) {
    queue<Pair> Q;
    Q.push({i,j});
    G[i][j] = 0;
    while(!Q.empty()) {
        Pair node = Q.front();
        int nx = node.first;
        int ny = node.second;
        Q.pop();
        
        for(int i=0; i<4; i++) {
            int mx = nx + tx[i];
            int my = ny + ty[i];
            if(mx < 0 || my < 0 || mx >= G.size() || my >= G[0].size()) continue;
            if(G[mx][my] == 0 || G[mx][my] <= height) continue;
            G[mx][my] = 0;
            Q.push({mx,my});
        }
    }
}

void checkBFS(vector<vector<int>> G, const int &height) {
    int count = 0;
    for(int i=0; i<G.size(); i++) {
        for(int j=0; j<G.size(); j++) {
            if(G[i][j] > height) {
                count++;
                BFS(i,j,G,height);
            }
        }
    }
    
    if(count > Ans.second) {
        Ans.first = height;
        Ans.second = count;
    }
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    Pair minMax = {2e9, 0};
    
    vector<vector<int>> G(N,vector<int>(N,0));
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cin>>G[i][j];
            minMax.first = minMax.first > G[i][j] ? G[i][j] : minMax.first;
            minMax.second = minMax.second < G[i][j] ? G[i][j] : minMax.second;
        }
    }
    
    for(int i=minMax.first; i<minMax.second; i++) {
        checkBFS(G, i);
    }
    
    printf("%d\n", Ans.second);
    return 0;
}
#endif


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

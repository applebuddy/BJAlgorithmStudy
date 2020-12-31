//
//  유턴싫어_2823.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 04/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 유턴싫어_2823
#if 0
#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;
typedef pair<int,int> Pair;

int tx[] = {0,0,-1,1};
int ty[] = {-1,1,0,0};

vector<vector<int>> CV(11, vector<int>(11,0));
string G[11] = {""};
int CNT=0;

void checkPath(int X, int Y, int H, int W) {
    int cnt=0;
    for(int i=0; i<4; i++) {
        int mx = X+tx[i];
        int my = Y+ty[i];
        if(mx<0 || my<0 || mx>=H || my>=W) {
            cnt++;
            continue;
        }
        
        if(G[mx][my]=='X') {
            cnt++; continue;
        }
    }
    
    if(cnt>=3) {
        printf("%d\n",1);
        exit(0);
    }
}

void BFS(int X, int Y, int H, int W) {
    queue<Pair> Q;
    Q.push({X,Y});
    checkPath(X,Y,H,W);
    CNT++;
    while(!Q.empty()) {
        int nx = Q.front().first;
        int ny = Q.front().second;
        checkPath(nx,ny,H,W);
        Q.pop();
        for(int i=0; i<4; i++) {
            int mx = nx + tx[i];
            int my = ny + ty[i];
            if(mx<0 || my<0 || mx>=H || my>=W) continue;
            if(G[mx][my]=='X' || CV[mx][my]!=0) continue;
            Q.push({mx,my});
            CV[mx][my]=1;
        }
    }
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int R,C; cin>>R>>C;
    for(int i=0; i<R; i++) {
        cin>>G[i];
    }

    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) {
            if(CV[i][j]==0 && G[i][j]=='.') BFS(i,j,R,C);
            if(CNT>1) return !printf("%d\n",1);
        }
    }
    printf("%d\n",0);
    return 0;
}
#endif

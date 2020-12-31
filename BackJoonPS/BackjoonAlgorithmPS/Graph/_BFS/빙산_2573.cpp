//
//  빙산_2573.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/01/11.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 빙산_2573 문제풀이

#if 0
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef pair<int,int> Pair;

int tx[] = {0,0,-1,1};
int ty[] = {-1,1,0,0};

void BFS(int n, int m, vector<vector<int>> &G) {
    queue<Pair> Q;
    G[n][m]=0;
    Q.push({n,m});
    while(!Q.empty()) {
        int nx = Q.front().first;
        int ny = Q.front().second;
        Q.pop();
        for(int i=0; i<4; i++) {
            int ax = nx + tx[i];
            int ay = ny + ty[i];
            if(ax<0 || ay<0 || ax>=G.size() || ay>=G[0].size()) continue;
            if(G[ax][ay]==0) continue;
            G[ax][ay]=0;
            Q.push({ax,ay});
        }
    }
}

bool checkBFS(vector<vector<int>> G) {
    int count = 0;
    for(int i=0; i<G.size(); i++) {
        for(int j=0; j<G[i].size(); j++) {
            if(G[i][j]!=0) {
                count++;
                if(count>1) return true;
                BFS(i,j,G);
            }
        }
    }
    return false;
}

bool meltIce(vector<vector<int>> originG, vector<vector<int>> &G) {
    bool isIce = false;
    for(int i=0; i<G.size(); i++) {
        for(int j=0; j<G[i].size(); j++) {
            if(G[i][j]==0) continue;
            for(int t=0; t<4; t++) {
                int tempX = i+tx[t];
                int tempY = j+ty[t];
                if(tempX<0 || tempY<0 || tempX >= G.size() || tempY >=G[0].size()) continue;
                if(originG[tempX][tempY]==0) G[i][j]--;
                if(G[i][j]==0) break;
            }
            if(G[i][j] > 0) isIce = true;
        }
    }
    return isIce;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N,M; cin>>N>>M;
    int Year = 0;
    vector<vector<int>> G(N, vector<int>(M,0));
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin>>G[i][j];
        }
    }
    
    while(1) {
        if(!checkBFS(G)){
            if(meltIce(G,G) == true) {
                Year++;
            }
            else return !printf("%d\n",0);
        } else {
            break;
        }
    }
    
    printf("%d\n",Year);
    return 0;
}
#endif

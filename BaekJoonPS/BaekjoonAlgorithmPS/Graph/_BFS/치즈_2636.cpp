//
//  치즈_2636.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/02.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 치즈 2636

// MARK: - BFS 문제풀이
#if 0
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef pair<int,int> Pair;

int tx[] = {0,0,-1,1};
int ty[] = {-1,1,0,0};
int Cnt = 0, Time = 1;

vector<vector<int>> V(101, vector<int>(101,0));
vector<vector<int>> C(101, vector<int>(101,0));
vector<Pair> rV;

void BFS(int X, int Y, const int &M, const int &N) {
    queue<Pair> Q;
    C[X][Y]=0;
    Q.push({X,Y});
    while(!Q.empty()) {
        auto node = Q.front();
        Q.pop();
        int nx = node.first;
        int ny = node.second;
        for(int i=0; i<4; i++) {
            int mx = nx + tx[i];
            int my = ny + ty[i];
            if(mx<0 || my<0 || mx>=M || my>=N) continue;
            if(C[mx][my]==1) continue;
            C[mx][my]=1;
            if(V[mx][my]==1) rV.push_back({mx,my});
            else Q.push({mx,my});
        }
    }
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int M,N; cin>>M>>N;
    for(int i=0; i<M; i++)
        for(int j=0; j<N; j++) {
            cin>>V[i][j];
            Cnt += V[i][j]==1 ? 1 : 0;
        }
    
    if(Cnt==0) return !printf("%d\n%d\n",0,0);
    
    while(Cnt>0) {
        C = vector<vector<int>>(101, vector<int>(101,0));
        rV = vector<Pair>();
        int nowCnt = Cnt;
        BFS(0,0,M,N);
        if(Cnt-rV.size()==0) return !printf("%d\n%d\n",Time,nowCnt);
        for(auto &v: rV) V[v.first][v.second]=0;
        Cnt -= rV.size();
        Time++;
    }
    return 0;
}
#endif

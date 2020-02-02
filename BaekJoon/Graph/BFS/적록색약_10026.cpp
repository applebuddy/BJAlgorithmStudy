//
//  적록색약_10026.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/02.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 적록색약 10026

// MARK: - BFS 문제풀이

#if 0
#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;
typedef pair<int,int> Pair;

vector<string> SV(101,"");
vector<string> rSV(101,"");
vector<vector<int>> C(101,vector<int>(101,0));
vector<vector<int>> rC(101,vector<int>(101,0));

Pair answer;
int tempAns=0;
int tx[] = {0,0,-1,1};
int ty[] = {-1,1,0,0};

void BFS(int X, int Y, vector<string> &V, vector<vector<int>> &C, const int &len) {
    queue<Pair> Q;
    Q.push({X,Y});
    while(!Q.empty()) {
        auto node = Q.front();
        Q.pop();
        int nx = node.first;
        int ny = node.second;
        for(int i=0; i<4; i++) {
            int mx = nx + tx[i];
            int my = ny + ty[i];
            if(mx<0 || my<0 || mx>=len || my>=len) continue;
            if(C[mx][my]==1 || V[mx][my]!=V[nx][ny]) continue;
            C[mx][my]=1;
            Q.push({mx,my});
        }
    }
    
}

int main() {
    int N; cin>>N;
    for(int i=0; i<N; i++) cin>>SV[i];
    rSV = SV;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(rSV[i][j]=='G') rSV[i][j]='R';
        }
    }
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(C[i][j]==0) {
                C[i][j]=1;
                answer.first++;
                BFS(i,j,SV,C, N);
            }
            if(rC[i][j]==0) {
                rC[i][j]=1;
                answer.second++;
                BFS(i,j,rSV,rC, N);
            }
        }
    }
    
    printf("%d %d\n",answer.first,answer.second);
    return 0;
}
#endif

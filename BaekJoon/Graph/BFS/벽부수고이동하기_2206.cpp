//
//  벽부수고이동하기_2206.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/01.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 벽부수고이동하기
// MARK: BFS C++ 문제풀이

#if 0
#include <iostream>
#include <queue>
#include <vector>
#define MAX 2e9
using namespace std;

typedef pair<pair<int,int>, int> TPair;
vector<vector<int>> SV(1001, vector<int>(1001,0));
int dist[1001][1001][2];

int N,M;
int tx[4] = {0,0,-1,1};
int ty[4] = {1,-1,0,0};

int BFS() {
    queue<TPair> Q;
    Q.push({{0,0},0});
    dist[0][0][0] = 1;
    
    while(!Q.empty()) {
        TPair node = Q.front();
        Q.pop();
        int nx = node.first.first;
        int ny = node.first.second;
        int broken = node.second;
        
        if(nx==N-1 && ny==M-1) {
            return dist[nx][ny][broken];
        }
        
        for(int i=0; i<4; i++) {
            int mx = nx + tx[i];
            int my = ny + ty[i];
            if(mx < 0 || my < 0 || mx >= N || my >= M) continue;
            if(dist[mx][my][broken] != 0) continue;
            
            if(SV[mx][my] == 0) {
                dist[mx][my][broken] = dist[nx][ny][broken] + 1;
                Q.push({{mx,my},broken});
            } else if(broken == 0) {
                dist[mx][my][1] = dist[nx][ny][broken] + 1;
                Q.push({{mx,my},1});
            }
        }
    }
    return -1;
}

int main() {
    cin>>N>>M;
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            scanf("%1d",&SV[i][j]);
        }
    }
    
    if(N==1 && M==1) return !printf("%d\n",1);
    
    printf("%d\n", BFS());
    
    return 0;
}
#endif

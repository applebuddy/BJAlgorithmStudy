//
//  알고스팟_1261.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 29/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 알고스팟_1281
#if 0
#include <iostream>
#include <vector>
#include <queue>
#define INF 2100000000
using namespace std;

int tx[] = {0,0,1,-1};
int ty[] = {1,-1,0,0};

class Node {
public:
    int X;
    int Y;
    int W;
    Node(int x, int y, int w) {
        this->X = x;
        this->Y = y;
        this->W = w;
    }
};

class Compare {
public:
    template <class T=Node>
    bool operator() (T &a, T &b) const {
        return a.W > b.W;
    }
};
    
int G[101][101]={0};
int D[101][101]={0};

int dijkstra(int X, int Y, int N, int M) {
    priority_queue<Node,vector<Node>,Compare> PQ;
    PQ.push(Node(X,Y,G[X][Y]));
    D[X][Y]=0;
    while(!PQ.empty()) {
        int nx = PQ.top().X;
        int ny = PQ.top().Y;
        int distance = PQ.top().W;
        PQ.pop();
        if(distance > D[nx][ny]) continue;
        for(int i=0; i<4; i++) {
            int mx = nx+tx[i];
            int my = ny+ty[i];
            if(mx<1 || my<1 || mx>N || my>M) continue;
            int nextDistance = distance + G[mx][my];
            if(nextDistance >= D[mx][my]) continue;
            D[mx][my] = nextDistance;
            PQ.push(Node(mx,my,nextDistance));
        }
    }
    return D[N][M];
}
    
void theAlgoSpot() {
    int N,M; cin>>M>>N;
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=M; j++) {
            scanf("%01d",&G[i][j]);
            D[i][j] = INF;
        }
    }
    int Ans = dijkstra(1,1,N,M);
    printf("%d\n",Ans);
    return;
}

int main() {
    theAlgoSpot();
    return 0;
}
#endif

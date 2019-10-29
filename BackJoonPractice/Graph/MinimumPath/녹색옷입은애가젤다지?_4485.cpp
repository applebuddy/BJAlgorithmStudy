//
//  녹색옷입은애가젤다지?_4485.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 29/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 초록옷 입은 애가 젤다지?_4485
#if 0
#include <iostream>
#include <vector>
#include <queue>
#define INF 1000000000
using namespace std;

int tx[] = {0,0,-1,1};
int ty[] = {1,-1,0,0};
int G[126][126]={0};
int D[126][126]={0};
int MAX=0;
class Edge {
public:
    int X;
    int Y;
    int W;
    Edge(int x, int y, int w) {
        this->X=x;
        this->Y=y;
        this->W=w;
    }
};

class Compare {
public:
    template <class T = Edge>
    bool operator () (T &a, T &b) const {
        return a.W > b.W;
    }
};

int dijstraAlgorithm(int X, int Y) {
    priority_queue<Edge,vector<Edge>,Compare> PQ;
    PQ.push(Edge(X,Y,G[X][Y]));
    while(!PQ.empty()) {
        Edge currentEdge = PQ.top();
        PQ.pop();
        int nx = currentEdge.X;
        int ny = currentEdge.Y;
        int currentWeight = currentEdge.W;
        if(D[nx][ny]<currentWeight) continue;
        for(int i=0; i<4; i++) {
            int mx = nx+tx[i];
            int my = ny+ty[i];
            if(mx>=MAX || my>=MAX || mx<0 || my<0) continue;
            if(currentWeight+G[mx][my] >= D[mx][my]) continue;
            D[mx][my]=currentWeight+G[mx][my];
            PQ.push(Edge(mx,my,D[mx][my]));
        }
    }
    return D[MAX-1][MAX-1];
}
    
void isntTheGeldaWearingGreenClothes() {
    int CNT=0;
    while(1) {
        CNT++;
        int N; cin>>N;
        if(N==0) break;
        MAX=N;
        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++) {
                cin>>G[i][j];
                D[i][j]=INF;
            }
        }
        int Ans = dijstraAlgorithm(0, 0);
        printf("Problem %d: %d\n",CNT,Ans);
    }
    return;
}
    
int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    isntTheGeldaWearingGreenClothes();
    return 0;
}
#endif

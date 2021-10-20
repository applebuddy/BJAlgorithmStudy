//
//  최소스패닝트리_1197.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 24/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 최소 스패닝 트리_1187
#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/// MARK: - Union Find Algorithm
// getParent
int getParent(int node[], int N) {
    if(node[N]==N) return N;
    return getParent(node,node[N]);
}

// mergeParent
void mergeParent(int node[], int A, int B) {
    A = getParent(node,A);
    B = getParent(node,B);
    if(A<B) node[B] = A;
    else node[A] = B;
}

// The Edge Class for Using in Kruskal Algorithm
struct Edge {
    int node[2];
    int weight;
    Edge(int x, int y, int w) {
        this->node[0] = x;
        this->node[1] = y;
        this->weight = w;
    }
};

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int v,e; cin>>v>>e;
    vector<Edge> EV;
    int C[v+1];
    for(int i=0; i<e; i++) {
        int A,B,W; cin>>A>>B>>W;
        EV.push_back(Edge(A,B,W));
    }
    
    sort(EV.begin(), EV.begin()+e, [](Edge &a, Edge &b) {
        return a.weight < b.weight;
    });
    
    
    int Ans = 0;
    for(int i=1; i<=v; i++) C[i] = i;
    int CNT=0, IDX=0;
    while(CNT!=v-1) {
        int from = EV[IDX].node[0];
        int to = EV[IDX].node[1];
        if(getParent(C, from)!=getParent(C, to)) {
            mergeParent(C, EV[IDX].node[0], EV[IDX].node[1]);
            CNT++;
            Ans += EV[IDX].weight;
        }
        IDX++;
    }
    printf("%d\n",Ans);
    return 0;
}
#endif

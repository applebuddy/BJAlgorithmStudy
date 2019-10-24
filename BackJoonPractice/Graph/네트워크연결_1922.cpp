//
//  네트워크연결_1922.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 24/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 네트워크 연결_1922; Minimum Spaning Tree Problem
#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int from, to, weight;
    Edge(int f, int t, int w) {
        this->from = f;
        this->to = t;
        this->weight = w;
    }
};

int getParent(int node[], int N) {
    if(node[N]==N) return N;
    return getParent(node, node[N]);
}

void mergeParent(int node[], int A, int B) {
    A = getParent(node,A);
    B = getParent(node,B);
    if(A<B) node[B] = A;
    else node[A] = B;
}

vector<Edge> EV;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int V,E; cin>>V>>E;
    int *Parent = new int[V+1];
    for(int i=0; i<E; i++) {
        int A,B,W; cin>>A>>B>>W;
        EV.push_back(Edge(A,B,W));
    }
    
    for(int i=1; i<=V; i++) Parent[i]=i;
    
    sort(EV.begin(), EV.end(), [](Edge &a, Edge &b) {
        return a.weight < b.weight;
    });
    
    int CNT=0, Ans=0, IDX=0;
    while(CNT!=V-1) {
        int from = EV[IDX].from;
        int to = EV[IDX].to;
        if(getParent(Parent,from)!=getParent(Parent,to)) {
            mergeParent(Parent,from,to);
            Ans += EV[IDX].weight;
            CNT++;
        }
        IDX++;
    }
    
    printf("%d\n",Ans);
    delete []Parent;
    return 0;
}
#endif

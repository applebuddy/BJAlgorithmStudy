//
//  도시분할계획_1647.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 25/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 도시분할계획_1647
#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Edge {
public:
    int node[2];
    int weight;
    Edge(int from, int to, int weight) {
        this->node[0] = from;
        this->node[1] = to;
        this->weight = weight;
    }
};

int getParent(vector<int> &node, int N) {
    if(node[N]==N) return N;
    else return getParent(node,node[N]);
}

void mergeParent(vector<int> &node, int A, int B) {
    A = getParent(node, A);
    B = getParent(node, B);
    if(A<B) node[B]=A;
    else node[A]=B;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int V,E; cin>>V>>E;
    vector<int> P(V,0);
    vector<Edge> EV;
    for(int i=0; i<V; i++) P[i]=i;
    for(int i=0; i<E; i++) {
        int from,to,weight; cin>>from>>to>>weight;
        EV.push_back(Edge(from,to,weight));
    }
    
    sort(EV.begin(), EV.end(), [](Edge &a, Edge &b) {
        return a.weight < b.weight;
    });
    
    int Ans=0, Cnt=0, Idx=0, Mx=0;
    while(Cnt != V-1) {
        int from = EV[Idx].node[0]-1;
        int to = EV[Idx].node[1]-1;
        if(getParent(P,from) != getParent(P,to)) {
            Cnt++;
            mergeParent(P, from, to);
            Mx = Mx < EV[Idx].weight ? EV[Idx].weight : Mx;
            Ans+=EV[Idx].weight;
        }
        Idx++;
    }
    
    printf("%d\n",Ans-Mx);
    return 0;
}
#endif

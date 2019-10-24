//
//  상근이의여행_9372.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 24/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 상근이의여행_9372
#if 0
#include <iostream>
#include <algorithm>
#include <vector>
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

int getParent(vector<int> &Node, int N) {
    if(Node[N]==N) return N;
    return getParent(Node, Node[N]);
}

void mergeParent(vector<int> &Node, int A, int B) {
    A = getParent(Node, A);
    B = getParent(Node, B);
    if(A<B) Node[B]=A;
    else Node[A] = B;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        int V,E; cin>>V>>E;
        vector<int> P(V+1,0);
        vector<Edge> EV;
        for(int i=1; i<=V; i++) P[i]=i;
        for(int i=0; i<E; i++) {
            int A,B; cin>>A>>B;
            EV.push_back(Edge(A,B,1));
        }
        
        int Ans=0,Cnt=0,Idx=0;
        while(Cnt!=V-1) {
            int from = EV[Idx].node[0];
            int to = EV[Idx].node[1];
            if(getParent(P,from) != getParent(P,to)) {
                Ans += EV[Idx].weight;
                Cnt++;
                mergeParent(P,from,to);
            }
            Idx++;
        }
        
        printf("%d\n",Ans);
    }
    return 0;
}
#endif 

//
//  네트워크복구_2211.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 25/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//


// ✭ 다익스트라 알고리즘 공부가 필요할듯 ..
#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<int,int> Pair;

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
    else return getParent(node, node[N]);
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
    for(int i=0; i<V; i++) P[i]=i;
    vector<Edge> EV;
    for(int i=0; i<E; i++) {
        int from,to,weight;
        cin>>from>>to>>weight;
        EV.push_back(Edge(from,to,weight));
    }
    
    sort(EV.begin(), EV.end(), [](Edge &a, Edge &b) {
        return a.weight < b.weight;
    });
    
    int CNT=0, IDX=0;
    vector<Pair> Ans;
    while(CNT != V-1) {
        int from = EV[IDX].node[0]-1;
        int to = EV[IDX].node[1]-1;
        if(getParent(P,from) != getParent(P,to)) {
            Ans.push_back({from+1,to+1});
            mergeParent(P, from, to);
            CNT++;
        }
        IDX++;
    }
    
    printf("%d\n",(int)Ans.size());
    for(auto v: Ans) printf("%d %d\n",v.first,v.second);
    puts("");
    return 0;
}
#endif

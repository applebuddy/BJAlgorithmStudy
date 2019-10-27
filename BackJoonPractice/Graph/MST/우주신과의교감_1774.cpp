//
//  우주신과의교감_1774.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 27/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//
 
/// MARK: - 우주신과의교감_1774
#if 0
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
typedef pair<int,int> Pair;

class Edge {
public:
    int node[2];
    double weight;
    Edge(int from, int to, double weight) {
        this->node[0] = from;
        this->node[1] = to;
        this->weight = weight;
    }
};

int getParent(vector<int> &node, int N) {
    if(node[N]==N) return N;
    return getParent(node,node[N]);
}

void mergeParent(vector<int> &node, int A, int B) {
    A = getParent(node, A);
    B = getParent(node, B);
    if(A<B) node[B]=A;
    else node[A]=B;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    vector<Pair> LV;
    int N,M; cin>>N>>M;
    vector<Pair> PV;
    vector<Edge> EV;
    vector<int> P(N,0);
    for(int i=0; i<N; i++) {
        double X,Y; cin>>X>>Y;
        PV.push_back({X,Y});
        P[i] = i;
    }

    for(int i=0; i<M; i++) {
        int A,B; cin>>A>>B;
        mergeParent(P,A-1,B-1);
    }
    
    for(int i=0; i<N; i++) {
        for(int j=i+1; j<N; j++) {
            double weight = sqrt(pow(PV[i].first-PV[j].first,2)+pow(PV[i].second-PV[j].second,2));
            EV.push_back(Edge(i,j,weight));
        }
    }
    
    sort(EV.begin(), EV.end(), [](Edge &a, Edge &b) {
        return a.weight < b.weight;
    });
    
    int CNT=0, IDX=0;
    double Ans=0.0;
    while(CNT != N-1-M) {
        if(IDX>=EV.size()) break;
        int from = EV[IDX].node[0];
        int to = EV[IDX].node[1];
        if(getParent(P,from) != getParent(P,to)) {
            mergeParent(P, from, to);
            Ans+=EV[IDX].weight;
            CNT++;
        }
        IDX++;
    }
    
    printf("%.2lf\n",Ans);
    return 0;
}
#endif

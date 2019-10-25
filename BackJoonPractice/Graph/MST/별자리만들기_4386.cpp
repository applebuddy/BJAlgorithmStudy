//
//  별자리만들기_4386.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 25/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 별자리만들기_4386 : Minimum Spanning Tree Algorithm Problem
#if 0
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
typedef pair<double,double> Pair;

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
    else return getParent(node,node[N]);
}

void mergeParent(vector<int> &node, int A, int B) {
    A = getParent(node, A);
    B = getParent(node, B);
    if(A<B) node[B]=A;
    else node[A]=B;
}

int main() {
    int N; cin>>N;
    vector<Pair> PV(N,{0,0});
    vector<int> P(N,0);
    for(int i=0; i<N; i++) P[i]=i;
    vector<Edge> EV;
    for(int i=0; i<N; i++) {
        double X,Y; cin>>X>>Y;
        PV[i].first = X;
        PV[i].second = Y;
    }
    
    for(int i=0; i<N; i++) {
        for(int j=i+1; j<N; j++) {
            double weight = sqrt(pow((PV[i].first-PV[j].first),2)+pow((PV[i].second-PV[j].second),2));
            EV.push_back(Edge(i,j,weight));
        }
    }
    
    sort(EV.begin(), EV.end(), [](Edge &a, Edge &b) {
        return a.weight < b.weight;
    });
    
    int cnt=0, idx=0;
    double Ans=0.0;
    while(cnt != N-1) {
        int from = EV[idx].node[0];
        int to = EV[idx].node[1];
        if(getParent(P, from) != getParent(P, to)) {
            Ans += EV[idx].weight;
            mergeParent(P, from, to);
            cnt++;
        }
        idx++;
    }
    
    printf("%.2lf\n",Ans);
    return 0;
}
#endif

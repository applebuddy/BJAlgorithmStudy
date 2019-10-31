//
//  학교탐방하기_13418.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 30/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//


#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

#if 0
/// MARK: 우선순위큐 사용 버전 통과 답안, [순수정렬보다 좀 더 느림])
struct Edge {
    int U,V,W;
    Edge(int u, int v, int w): U(u), V(v), W(w){}
};

class CompareMinHeap {
public:
    template <class T=Edge>
    bool operator() (T &A, T &B) const {
        return A.W > B.W;
    }
};

class CompareMaxHeap {
public:
    template <class T=Edge>
    bool operator() (T &A, T &B) const {
        return A.W < B.W;
    }
};

priority_queue<Edge, vector<Edge>, CompareMaxHeap> maxPQ;
priority_queue<Edge, vector<Edge>, CompareMinHeap> minPQ;

int getParent(vector<int> &node, int N) {
    if(node[N]==N) return N;
    return getParent(node,node[N]);
}

void mergeParent(vector<int> &node, int A, int B) {
    A = getParent(node, A);
    B = getParent(node, B);
    if(A<B) node[B] = A;
    else node[A] = B;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int V,E; cin>>V>>E;
    V++;
    E++;
    int worstAns=0, bestAns=0;
    vector<int> PV(V+1,0);
    for(int i=1; i<=V; i++) PV[i]=i;
    for(int i=0; i<E; i++) {
        int from,to,weight; cin>>from>>to>>weight;
        minPQ.push(Edge(from,to,weight==0 ? 1 : 0));
        maxPQ.push(Edge(from,to,weight==0 ? 1 : 0));
    }
    
    int CNT=0, IDX=0;
    while(CNT != V-1) {
        int from = maxPQ.top().U;
        int to = maxPQ.top().V;
        int weight = maxPQ.top().W;
        if(getParent(PV,from) != getParent(PV,to)) {
            CNT++;
            mergeParent(PV, from, to);
            worstAns += weight;
        }
        maxPQ.pop();
        if(maxPQ.empty()) break;
    }
    worstAns*=worstAns;
    
    PV.assign(V+1, 0);
    for(int i=1; i<=V; i++) PV[i]=i;
    CNT=0;
    IDX=0;
    while(CNT != V-1) {
        int from = minPQ.top().U;
        int to = minPQ.top().V;
        int weight = minPQ.top().W;
        if(getParent(PV,from) != getParent(PV,to)) {
            CNT++;
            mergeParent(PV, from, to);
            bestAns += weight;
        }
        minPQ.pop();
        if(minPQ.empty()) break;
    }
    bestAns*=bestAns;
    
    printf("%d\n",worstAns-bestAns);
    
    return 0;
}
#endif


#if 0
/// MARK: 우선순위큐 미사용 버전 통과 답안)
struct Edge {
    int U,V,W;
    Edge(int u, int v, int w): U(u), V(v), W(w){}
    bool operator <(const Edge &O)const{ return W < O.W; }
};

int getParent(vector<int> &node, int N) {
    if(node[N]==N) return N;
    return getParent(node,node[N]);
}

void mergeParent(vector<int> &node, int A, int B) {
    A = getParent(node, A);
    B = getParent(node, B);
    if(A<B) node[B] = A;
    else node[A] = B;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int V,E; cin>>V>>E;
    V++;
    E++;
    int worstAns=0, bestAns=0;
    vector<Edge> EV;
    vector<int> PV(V+1,0);
    for(int i=1; i<=V; i++) PV[i]=i;
    for(int i=0; i<E; i++) {
        int from,to,weight; cin>>from>>to>>weight;
        EV.push_back(Edge(from,to,weight));
    }
    
    sort(EV.begin(), EV.end(), [](Edge &a, Edge &b) {
        return a.W < b.W;
    });
    
    int CNT=0, IDX=0;
    while(CNT != V-1) {
        int from = EV[IDX].U;
        int to = EV[IDX].V;
        if(getParent(PV,from) != getParent(PV,to)) {
            CNT++;
            mergeParent(PV, from, to);
            worstAns += (EV[IDX].W==0);
        }
        IDX++;
    }
    worstAns*=worstAns;
    
    sort(EV.begin(), EV.end(), [](Edge &a, Edge &b) {
        return a.W > b.W;
    });
    
    PV.assign(V+1, 0);
    for(int i=1; i<=V; i++) PV[i]=i;
    CNT=0;
    IDX=0;
    while(CNT != V-1) {
        int from = EV[IDX].U;
        int to = EV[IDX].V;
        if(getParent(PV,from) != getParent(PV,to)) {
            CNT++;
            mergeParent(PV, from, to);
            bestAns += (EV[IDX].W==0);
        }
        IDX++;
    }
    bestAns*=bestAns;
    
    printf("%d\n",worstAns-bestAns);
    
    return 0;
}
#endif

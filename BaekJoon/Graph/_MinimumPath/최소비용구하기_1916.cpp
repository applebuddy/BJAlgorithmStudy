//
//  최소비용구하기_1916.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 29/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 최소비용구하기_1916

#if 0
#include <iostream>
#include <vector>
#include <queue>
#define INF 2000000000
using namespace std;

typedef pair<int,int> Pair;

vector<int> DV(1001,0);
vector<Pair> EV[1001];

class Compare {
public:
    template <class T = Pair>
    bool operator() (T &a, T &b) const {
        return a.second > b.second;
    }
};
   
int dijkstra(int from, int to) {
    priority_queue<Pair,vector<Pair>, Compare> PQ;
    PQ.push({from,0});
    DV[from]=0;
    while(!PQ.empty()) {
        int current = PQ.top().first;
        int distance = PQ.top().second;
        PQ.pop();
        if(DV[current] < distance) continue;
        for(int i=0; i<EV[current].size(); i++) {
            int next = EV[current][i].first;
            int nextDistance = EV[current][i].second + distance;
            if(DV[next] <= nextDistance) continue;
            DV[next] = nextDistance;
            PQ.push({next,nextDistance});
        }
    }
    return DV[to];
}
    
void getTheMinimumCost() {
    int V,E; cin>>V>>E;
    int FROM,TO;
    for(int i=0; i<E; i++) {
        int from,to,weight; cin>>from>>to>>weight;
        EV[from].push_back(make_pair(to,weight));
    }
    
    for(int i=1; i<=V; i++) DV[i]=INF;
    cin>>FROM>>TO;
    
    int Ans = dijkstra(FROM,TO);
    printf("%d\n",Ans);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    getTheMinimumCost();
    return 0;
}
#endif

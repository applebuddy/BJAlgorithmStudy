//
//  최단경로_1753.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 26/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 최단경로_1753
#if 0
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef pair<long long,long long> Pair;
long long INF = 6100000000;
vector<long long> DV(20001,INF);
vector<Pair> EV[20001];

class Compare {
public:
    template <class T=Pair>
    bool operator() (T &A, T &B) {
        return A.second > B.second;
    }
};
    
void dijkstra(int start) {
    priority_queue<Pair,vector<Pair>,Compare> PQ;
    PQ.push({start,0});
    while(!PQ.empty()) {
        long long current = PQ.top().first;
        long long distance = PQ.top().second;
        PQ.pop();
        if(DV[current] < distance) continue;
        for(int i=0; i<EV[current].size(); i++) {
            long long next = EV[current][i].first;
            long long nextDistance = EV[current][i].second + distance;
            if(nextDistance < DV[next]) {
                DV[next] = nextDistance;
                PQ.push({next,nextDistance});
            }
        }
    }
}

void theShortestPath() {
    int V,E,D; cin>>V>>E>>D;
    for(int i=0; i<E; i++) {
        int u,v,w; cin>>u>>v>>w;
        EV[u].push_back({v,w});
    }
    DV[D]=0;
    dijkstra(D);
    for(int i=1; i<=V; i++) {
        if(DV[i]<INF) printf("%lld\n",DV[i]);
        else printf("INF\n");
    }
    return;
}
    
int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theShortestPath();
    return 0;
}
#endif

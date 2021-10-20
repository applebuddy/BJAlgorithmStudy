//
//  거의최단경로_5719.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 08/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#if 0
#include <iostream>
#include <vector>
#include <queue>
#define INF 1000000000
using namespace std;
typedef pair<int,int> Pair;
vector<Pair> G[501];
vector<Pair> minPath[501];

class Compare {
public:
    template <class T=Pair>
    bool operator() (T &a, T &b) {
        return a.second > b.second;
    }
};
    
void dijkstra(int start, vector<int> &D, int N) {
    priority_queue<Pair, vector<Pair>, Compare> PQ;
    PQ.push({start,0});
    minPath[start].push_back({start,0});
    D[start]=0;
    while(!PQ.empty()) {
        int current = PQ.top().first;
        int distance = PQ.top().second;
        PQ.pop();
        for(int i=0; i<G[current].size(); i++) {
            int next = G[current][i].first;
            int nextDistance = G[current][i].second + distance;
            if(nextDistance < D[next]) {
                D[next] = nextDistance;
                PQ.push({next, nextDistance});
                
                minPath[current].clear();
                minPath[current].push_back({next,nextDistance});
            } else if(nextDistance == D[next]) {
                minPath[current].push_back({next,nextDistance});
            }
        }
    }
}
    
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    while(1) {
        int N,M; cin>>N>>M;
        if(N==0 && M==0) break;
        int Start,Dest; cin>>Start>>Dest;
        vector<int> D(N,INF);
        
        
        if(M==0 && N==0) break;
        for(int i=0; i<M; i++) {
            int from, to, weight; cin>>from>>to>>weight;
            G[from].push_back({to,weight});
        }
        
        dijkstra(Start,D,N);
        for(int i=0; i<N; i++) printf("%d ",D[i]);
        puts("");
    }
    return 0;
}
#endif

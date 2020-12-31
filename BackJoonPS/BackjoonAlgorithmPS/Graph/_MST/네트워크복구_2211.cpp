//
//  네트워크복구_2211.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 25/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 네트워크복구_2211
#if 0
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
typedef pair<int,int> Pair;

class Compare {
public:
    template <class T = Pair>
    bool operator() (T &a, T& b) {
        return a.second>b.second;
    }
};

vector<Pair> PV[1001];
vector<int> Ans(1001,0);
vector<int> DV(1001,1000000000);

void dijkstra(int start) {
    
    priority_queue<Pair,vector<Pair>,Compare> PQ;
    PQ.push({start,0});
    DV[1]=0;
    while(!PQ.empty()) {
        int distance = PQ.top().second;
        int current = PQ.top().first;
        PQ.pop();
        if(DV[current] < distance) continue;
        for(int i=0; i<PV[current].size(); i++) {
            int next = PV[current][i].first;
            int nextDistance = distance + PV[current][i].second;
            if(nextDistance < DV[next]) {
                Ans[next] = current;
                DV[next] = nextDistance;
                PQ.push({next, nextDistance});
            }
        }
    }
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int V,E; cin>>V>>E;

    vector<int> P(V,0);
    for(int i=0; i<V; i++) P[i]=i;

    for(int i=0; i<E; i++) {
        int from,to,weight;
        cin>>from>>to>>weight;
        PV[from].push_back({to,weight});
        PV[to].push_back({from,weight});
    }

    dijkstra(1);

    printf("%d\n",V-1);
    for(int i=2; i<=V; i++) {
        printf("%d %d\n",Ans[i],i);
    }
    return 0;
}
#endif

/// MARK: - 다른 분 풀이 답안; dijkstra Algorithm 사용 
//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <queue>
//#include <functional>
//
//#define INF 987654321
//
//using namespace std;
//
//typedef pair<int, int> pii;
//
//vector<pii> vc[1001];
//int dist[1001];
//int parent[1001];
//
//int main()
//{
//    int V,E;
//    scanf("%d %d", &V, &E);
//
//    for (int i = 0; i < E; i++)
//    {
//        int from, to, val;
//        scanf("%d %d %d", &from, &to, &val);
//
//        vc[from].push_back(pii(to, val));
//        vc[to].push_back(pii(from, val));
//    }
//
//    // 최단 거리 INF 초기화
//    fill(dist, dist + 1001, INF);
//
//    // 최소 힙
//    priority_queue<pii, vector<pii>, greater<pii>> pq;
//
//    // first :: 최단 거리, second :: 정점 위치
//    pq.push(pii(0,1));
//    // 시작 위치의 최단 거리는 0이다.
//    dist[1] = 0;
//
//    while (!pq.empty())
//    {
//        int here = pq.top().second;
//        int hereCost = pq.top().first;
//
//        pq.pop();
//
//        // here까지 최단 거리가 hereCost보다 작다면 continue
//        if (dist[here] < hereCost)
//            continue;
//
//        for (int i = 0; i < vc[here].size(); i++)
//        {
//            int there = vc[here][i].first;
//            int thereCost = vc[here][i].second + hereCost;
//
//            // there까지 최단 거리가 thereCost보다 크다면 갱신
//            if (dist[there] > thereCost)
//            {
//                dist[there] = thereCost;
//
//                pq.push(pii(thereCost, there));
//
//                // 갱신이 된다면 parent는 유일하다.
//                parent[there] = here;
//            }
//        }
//    }
//
//    // 정점의 수 - 1이 회선 개수이다.
//    printf("%d\n", V - 1);
//
//    for (int i = 2; i <= V; i++)
//        printf("%d %d\n", parent[i], i);
//
//    return 0;
//}

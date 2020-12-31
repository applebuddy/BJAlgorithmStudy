//
//  DijkstraAlgorithm.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 26/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Dijkstra Algorithm Exsmple
#if 0
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef pair<int,int> Pair;
int number = 4;
int INF = 1000000000;

vector<Pair> A[5];
int D[5];

class Compare {
public:
    template <class T=Pair>
    bool operator() (T &a, T &b) {
        return a.second > b.second;
    }
};

void dijkstra(int start) {
    D[start] = 0;
    priority_queue<Pair,vector<Pair>,Compare> PQ;
    // 가까운 순서대로 처리하므로 큐를 사용
    
    // 작업 시작전 시작지의 위치, 가중치를 0 으로 두어 큐에 삽입
    PQ.push(make_pair(start,0));
    while(!PQ.empty()) {
        int current = PQ.top().first;
        // 짧은것이 먼저오도록 Priority_queue를 설정
        int distance = PQ.top().second;
        PQ.pop();
        // 최단 거리가 아닌 경우 스킵
        if(D[current] < distance) continue;
        for(int i=0; i<A[current].size(); i++) {
            // 선택된 노드의 인접노드
            int next = A[current][i].first;
            // 선택된 노드 거쳐 인접노드로 가는 비용
            int nextDistance = distance + A[current][i].second;
            // 기존의 최소 비용보다 더 저렵하다면 교체
            if(nextDistance < D[next]) {
                printf("%d, %d\n",current,next);
                D[next] = nextDistance;
                PQ.push(make_pair(next, nextDistance));
            }
        }
    }
}
    
int main() {
    // 기본적으로 연결되지 않은 경우 비용은 무한
    for(int i=1; i<=number; i++) {
        D[i] = INF;
    }
    
    A[1].push_back({2,1});
    A[1].push_back({4,4});
    A[1].push_back({3,2});

    A[4].push_back({2,2});
    A[4].push_back({3,3});
    
    dijkstra(4);
    
    for(int i=1; i<=number; i++) {
        printf("%d ",D[i]);
    }
    
    return 0;
}
#endif

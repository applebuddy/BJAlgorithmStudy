//
//  Graph_이분그래프_1707.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 26/04/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//


//// 1707 이분그래프의 판독
//문제
//그래프의 정점의 집합을 둘로 분할하여, 각 집합에 속한 정점끼리는 서로 인접하지 않도록 분할할 수 있을 때, 그러한 그래프를 특별히 이분 그래프 (Bipartite Graph) 라 부른다.
//
//그래프가 입력으로 주어졌을 때, 이 그래프가 이분 그래프인지 아닌지 판별하는 프로그램을 작성하시오.
//
//입력
//입력은 여러 개의 테스트 케이스로 구성되어 있는데, 첫째 줄에 테스트 케이스의 개수 K(2≤K≤5)가 주어진다. 각 테스트 케이스의 첫째 줄에는 그래프의 정점의 개수 V(1≤V≤20,000)와 간선의 개수 E(1≤E≤200,000)가 빈 칸을 사이에 두고 순서대로 주어진다. 각 정점에는 1부터 V까지 차례로 번호가 붙어 있다. 이어서 둘째 줄부터 E개의 줄에 걸쳐 간선에 대한 정보가 주어지는데, 각 줄에 인접한 두 정점의 번호가 빈 칸을 사이에 두고 주어진다.
//
//출력
//K개의 줄에 걸쳐 입력으로 주어진 그래프가 이분 그래프이면 YES, 아니면 NO를 순서대로 출력한다.

#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> a[20001];
int color[20001];

// 방문할 노드와 색깔을 갖는 dfs함수
void dfs(int node, int c) {
    color[node] = c;
    // node 방문시점.
    for(int i=0; i<a[node].size(); i++){
        int next = a[node][i];
        if(color[next] == 0) {
            // 다음 방문가능한 노드 방문 시 그 노드의 색상은 반대색상이다. 1 -> 2 or 2 -> 1
            dfs(next, 3-c);
        }
    }
    
}

int main() {

    int t; //테스트케이스의 수, k
    scanf("%d",&t);
    
    while(t--){
        memset(color, 0, sizeof(color));
        int n,m;// 정점, 간선의 수를 입력받고,
        scanf("%d %d",&n,&m);
        
        for(int j=1; j<=n; j++){
            a[j].clear();
        }
        
        for(int j=0; j<m; j++){ // 테스트케이스 별 간선의 갯수만큼 다시 입력을 받아 그래프를 구성한다.
            int u,v;
            scanf("%d %d",&u,&v);
            // 양방향으로 간선을 구성해준다.
            a[u].push_back(v);
            a[v].push_back(u);
        }
        
        for(int j=1; j<=n; j++){
            // 만약 해당 정점의 색깔이 색칠되지 않으면, 색칠을 하며 dfs탐색을 실시한다.
            if(color[j] == 0){
                dfs(j,1);
            }
        }
        int ok = true;
        for(int j=1; j<=n; j++){
            for(int k=0; k<a[j].size(); k++){
                int next = a[j][k];
                if(color[j] == color[next]) {
                    ok =  false;
                }
            }
        }
        
        printf("%s\n",ok ? "YES" : "NO");
    }
    
    return 0;
}


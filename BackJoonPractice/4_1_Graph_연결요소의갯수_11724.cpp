//
//  Graph_연결요소의갯수_11724.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 26/04/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <string.h>
#include <iostream>
#include <vector>
using namespace std;


// 11724_연결요소의 갯수
// 시간 제한    메모리 제한    제출    정답    맞은 사람    정답 비율
// 3 초    256 MB    15814    7862    5204    47.425%
// 문제
// 방향 없는 그래프가 주어졌을 때, 연결 요소 (Connected Component)의 개수를 구하는 프로그램을 작성하시오.
//
// 입력
// 첫째 줄에 정점의 개수 N과 간선의 개수 M이 주어진다. (1 ≤ N ≤ 1,000, 0 ≤ M ≤ N×(N-1)/2) 둘째 줄부터  M개의 줄에 간선의 양 끝점 u와 v가 주어진다. (1 ≤ u, v ≤ N, u ≠ v) 같은 간선은 한 번만 주어진다.
//
// 출력
// 첫째 줄에 연결 요소의 개수를 출력한다.

//  예제 입력
//  6 5
//  1 2
//  2 5
//  5 1
//  3 4
//  4 6

//  예제 출력
//  2

vector<int> a[1001];
bool check[1001];

// dfs 경로를 출력한다.
void dfs(int node) {
    check[node] = true;
//    printf("node : %d push", node);
    
    for(int i=0; i<a[node].size(); i++){
        int next = a[node][i];
        if(check[next] == false){
            dfs(next);
        }
    }
}

int main() {
   
    // 첫째 줄에 정점의 개수 N과 간선의 개수 M이 주어진다. (1 ≤ N ≤ 1,000, 0 ≤ M ≤ N×(N-1)/2) 둘째 줄부터  M개의 줄에 간선의 양 끝점 u와 v가 주어진다. (1 ≤ u, v ≤ N, u ≠ v) 같은 간선은 한 번만 주어진다.
    int n,m,num=0;
    scanf("%d %d",&n,&m);
    
    for(int i=1; i<=m; i++){
        int u,v;
        scanf("%d %d",&u,&v);
        
        // 양방향으로 간선을 추가해준다.
        a[u].push_back(v);
        a[v].push_back(u);
    }
    
    // 시작지점을 0 ~ n-1까지 돌아가며 그래프의 갯수를 판단한다.
    for(int i=1; i<=n; i++){
        // 아직 방문한 노드위치가 아니라면 dfs로 해당 노드위치부터 해서 dfs탐색을 실시한다.
        if(check[i] == false) {
            num++;
//            printf("%d",i);
            dfs(i);
            // 만약 방문이 이미 된 인덱스라면, 건너뛴다.
        } else {
            
        }
    }
    // dfs 순차탐색으로 식별한 그래프의 갯수를 출력한다.
    printf("%d",num);
    
    return 0;
}

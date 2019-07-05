//
//  DFS&BFS.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 22/04/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//
// MARK:- DFS, BFS : 시작점을 시작해서 모든 정점을 1번씩 접하는 것
// MARK: DFS(깊이 우선탐색)
// MARK: BFS(너비 우선탐색)

// ★ 두 탐색방법의 주 원칙은 "모든 정점을 한번씩 방문"한다는 것이다.

#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <queue>

using namespace std;


// * 첫째 줄에 정점의 개수 N(1 ≤ N ≤ 1,000), 간선의 개수 M(1 ≤ M ≤ 10,000), 탐색을 시작할 정점의 번호 V가 주어진다. 다음 M개의 줄에는 간선이 연결하는 두 정점의 번호가 주어진다. 어떤 두 정점 사이에 여러 개의 간선이 있을 수 있다. 입력으로 주어지는 간선은 양방향이다.

// 예제 입력
//  4 5 1
//  1 2
//  1 3
//  1 4
//  2 4
//  3 4

// 예제 출력
// 1 2 4 3
// 1 2 3 4

//vector<int> a[1001];
//bool check[1001];
//
//void dfs(int node) {
//    check[node] = true;
//    printf("%d ",node);
//
//    for(int i=0; i<a[node].size(); i++){
//        int next = a[node][i];
//        if(check[next] == false){
//            dfs(next);
//        }
//    }
//}
//
//void bfs(int start) {
//    memset(check,false,sizeof(check));
//    queue<int> q;
//    check[start] = true;
//    q.push(start);
//
//    while(!q.empty()){
//        int node = q.front();
//        q.pop();
//        printf("%d ",node);
//        for(int i=0; i<a[node].size(); i++){
//            int next = a[node][i];
//            if(check[next] == false){
//                check[next] = true;
//                q.push(next);
//            }
//        }
//    }
//}
//
//
//int main() {
//    // 첫째 줄에 정점의 개수 N(1 ~ 1000), M(1 ~ 10000), 탐색시작할 점정의 번호, V가 주어진다.
//    int n,m,start;
//    scanf("%d %d %d",&n,&m,&start);
//
//    // 그 다음 m개의 줄에는 간선이 연결하는 두 정점의 번호가 주어진다.
//    for(int i=0; i<m; i++){
//        int u,v;
//        scanf("%d %d",&u,&v);
//        // 양방향으로 정점간의 간선 정보를 추가한다.
//        a[u].push_back(v);
//        a[v].push_back(u);
//    }
//
//    for(int i=0; i<n; i++){
//        sort(a[i].begin(), a[i].end());
//    }
//
//    memset(check,false,sizeof(check));
//    dfs(start);
//    puts("");
//
//    memset(check,false,sizeof(check));
//    bfs(start);
//    puts("");
//
//    return 0;
//}


//
//// 최대 정점의 개수는 1,000개이다.
//vector<int> a[1001];
//bool check[1001];
//
//void dfs(int node) {
//    check[node] = true;
//    printf("%d ",node);
//    for(int i=0; i<a[node].size(); i++){
//        int next = a[node][i];
//        if(check[next] == false){
//            dfs(next);
//        }
//    }
//}
//
//void bfs(int start) {
//    queue<int> q;
//
//    check[start] = true;
//    q.push(start);
//
//    while(!q.empty()) {
//        int node = q.front();
//        q.pop();
//        printf("%d ",node);
//        for(int i=0; i<a[node].size(); i++){
//            int next = a[node][i];
//            if(check[next] == false){
//                check[next] = true;
//                q.push(next);
//            }
//        }
//
//    }
//
//}
//
//int main() {
//
//    memset(check,false,sizeof(check));
//
//    int n, m, start; // n:정점갯수, m:간선갯수, start:시작지점
//    scanf("%d %d %d",&n,&m,&start); // 정점갯수, 간선갯수, 시작지접을 각각 입력 받는다.
//
//    for(int i=0; i<m; i++) { // 간선갯수만큼 루프문을 돌린다. 정점번호, 간선의 방향을 차례로 입력받는다.
//        int u,v;
//        scanf("%d %d",&u,&v);
//        // 해당 문제의 간선은 양방향이 원칙이므로 양방향으로 인접리스트에 간선을 적용한다.
//        a[u].push_back(v);
//        a[v].push_back(u);
//    }
//
//    // 인접리스트의 정점, 간선정보를 오름차순으로 정렬을 해준다.
//    for(int i=0; i<n; i++){
//        sort(a[i].begin(), a[i].end());
//    }
//
//    // dfs경로탐색결과를 출력한다.
//    dfs(start);
//    puts("");
//
//    // bfs경로탐색결과를 출력한다.
//    memset(check,false,sizeof(check));
//
//    bfs(start);
//    puts("");
//}



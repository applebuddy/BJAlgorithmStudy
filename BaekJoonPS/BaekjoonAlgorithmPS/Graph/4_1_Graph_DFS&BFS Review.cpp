////
////  4_1_Graph_DFS&BFS Review.cpp
////  BackJoonPractice
////
////  Created by Min Kyeong Tae on 22/05/2019.
////  Copyright © 2019 Min Kyeong Tae. All rights reserved.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string.h>
//#include <queue>
//#define endl "\n"
//using namespace std;
//vector<int> g[1001];
//bool visit[1001];
//int n,m,v;
//
//void DFS(int node){
//    visit[node]=true;
//    cout << node << " ";
//    for(int i=0; i<g[node].size(); i++){
//        int next = g[node][i];
//        if(visit[next]==false){
//            DFS(next);
//        }
//    }
//}
//
//void BFS(int start){
//    memset(visit,false,sizeof(visit));
//    queue<int> q;
//    q.push(start);
//    visit[start]=true;
//    
//    while(!q.empty()){
//        int node = q.front();
//        q.pop();
//        cout << node << " ";
//        for(int i=0; i<g[node].size(); i++){
//            int next = g[node][i];
//            if(visit[next]==false){
//                visit[next]=true;
//                q.push(next);
//            }
//        }
//    }
//}
//
//int main(){
//    ios_base :: sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    cin >> n >> m >> v;
//    for(int i=0; i<m; i++){
//        int a,b;
//        cin >> a >> b;
//        g[a].push_back(b);
//        g[b].push_back(a);
//    }
//    for(int i=0; i<n; i++){
//        sort(g[i].begin(), g[i].end());
//    }
//    DFS(v);
//    cout << endl;
//    BFS(v);
//    
//    return 0;
//}

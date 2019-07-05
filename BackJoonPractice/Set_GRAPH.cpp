//
//  Set_GRAPH.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 04/07/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

//#include <iostream>
//#include <queue>
//#include <vector>
//#include <cmath>
//using namespace std;
//typedef pair<int,int> Pair;
//vector<Pair> tv[101];
//vector<vector<int>> c(101,vector<int>(101,0));
//vector<int> P(101,0);
//int N,M,n,m,p;
//
//void BFS(int n){
//    queue<int> q;
//    q.push(n);
//    while(!q.empty()){
//        int node=q.front();
//        q.pop();
//        for(int i=0; i<tv[node].size(); i++){
//            int next=tv[node][i].first;
//            int price=tv[node][i].second;
//            P[next]=P[node]+price;
//            if(c[node][next]==0){
//                c[node][next]=1000001;
//                q.push(next);
//            }
//            c[node][next]=fmin(c[node][next],P[next]);
//        }
//    }
//}
//
//int main(){
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    cin>>N>>M;
//    for(int i=0; i<M; i++){
//        cin>>n>>m>>p;
//        tv[n].push_back(make_pair(m, p));
//        tv[m].push_back(make_pair(n, p));
//    }
//    BFS(1);
//    for(int i=1; i<=N; i++){
//        for(int j=1; j<=N; j++){
//            printf("%d ",c[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

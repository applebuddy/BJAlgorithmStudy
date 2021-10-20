////
////  4_1_Graph_연결요소의갯수_11724_Review.cpp
////  BackJoonPractice
////
////  Created by Min Kyeong Tae on 25/05/2019.
////  Copyright © 2019 Min Kyeong Tae. All rights reserved.
////
//
//#include <iostream>
//#include <vector>
//#define endl "\n"
//using namespace std;
//
//vector<int> g[1001];
//vector<bool> check(1001,false);
//bool isGraph=false;
//
//void DFS(int node){
//    check[node]=true;
//    for(int i=0; i<g[node].size(); i++){
//        int next = g[node][i];
//        if(check[next]==true) continue;
//        DFS(next);
//    }
//}
//
//int main(){
//    ios_base :: sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    int N,M;
//    int answer=0;
//    cin >> N >> M;
//    for(int i=0; i<M; i++){
//        int a,b;
//        cin >> a >> b;
//        g[a].push_back(b);
//        g[b].push_back(a);
//    }
//    
//    for(int i=1; i<=N; i++){
//        if(check[i]==false){
//            DFS(i);
//            answer++;
//        }
//    }
//    
//    cout << answer << endl;
//    return 0;
//}

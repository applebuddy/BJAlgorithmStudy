////
////  4_1_Graph_이분그래프_1707_Review.cpp
////  BackJoonPractice
////
////  Created by Min Kyeong Tae on 25/05/2019.
////  Copyright © 2019 Min Kyeong Tae. All rights reserved.
////
//
//#include <iostream>
//#include <vector>
//#include <string.h>
//#define endl "\n"
//using namespace std;
//
//vector<int> g[20001];
//int c[20001];
//void DFS(int node, int color){
//    
//    c[node]=color;
//    for(int i=0; i<g[node].size(); i++){
//        int next=g[node][i];
//        if(c[next]==0){
//            DFS(next,3-color);
//        }
//    }
//}
//
//int main(){
//    ios_base :: sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    int K,V,E;
//    bool isTG=false;
//    cin >> K;
//    
//    while(K--){
//        memset(c,0,sizeof(c));
//        cin >> V >> E;
//        for(int i=1; i<=V; i++){
//            g[i].clear();
//        }
//        
//        for(int i=0; i<E; i++){
//            int a,b;
//            cin >> a >> b;
//            g[a].push_back(b);
//            g[b].push_back(a);
//        }
//        
//        for(int i=1; i<=V; i++){
//            if(c[i]==0){
//            DFS(i,1);
//            }
//        }
//        
//        isTG=true;
//        for(int i=1; i<=V; i++){
//            for(int j=0; j<g[i].size(); j++){
//                int next = g[i][j];
//                if(c[i]==c[next]){
//                    isTG=false;
//                    break;
//                }
//            }
//            if(isTG==false) break;
//        }
//        printf("%s\n",isTG ? "YES" : "NO");
//    }
//}

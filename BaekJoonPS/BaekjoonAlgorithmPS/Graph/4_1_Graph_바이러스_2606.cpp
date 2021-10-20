////
////  4_1_Graph_바이러스_2606.cpp
////  BackJoonPractice
////
////  Created by Min Kyeong Tae on 07/06/2019.
////  Copyright © 2019 Min Kyeong Tae. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//#include <string.h>
//using namespace std;
//
//int c[101];
//vector<int> g[101];
//
//void DFS(int n){
//    int node=n;
//    c[node]=1;
//    for(int i=0; i<g[node].size(); i++){
//        int next=g[node][i];
//        if(c[next]==0) DFS(next);
//    }
//}
//
//int main(){
//    int N,M,ans=0;
//    memset(c,0,101);
//    scanf("%d %d",&N,&M);
//    
//    for(int i=0; i<M; i++){
//        int a,b;
//        scanf("%d %d",&a,&b);
//        g[a].push_back(b);
//        g[b].push_back(a);
//    }
//    
//    DFS(1);
//    
//    for(int i=2; i<=N; i++){
//        if(c[i]==1) ans++;
//    }
//    printf("%d\n",ans);
//    
//    return 0;
//}

////
////  1_5_NandM_N과M(6)_15655.cpp
////  BackJoonPractice
////
////  Created by Min Kyeong Tae on 21/05/2019.
////  Copyright © 2019 Min Kyeong Tae. All rights reserved.
////
//
//#include <stdio.h>
//#include <algorithm>
//#include <vector>
//using namespace std;
//vector<int> k;
//int a[10];
//bool c[10];
//
//void go(int index, int s, int n, int m){
//    if(index==m){
//        for(int i=0; i<m; i++){
//            printf("%d ",a[i]);
//        }
//        printf("\n");
//        return;
//    }
//    
//    for(int i=s; i<n; i++){
//        if(c[i]==true) continue;
//        c[i]=true;
//        a[index]=k[i];
//        go(index+1,i,n,m);
//        c[i]=false;
//    }
//}
//
//int main(){
//    int n,m;
//    scanf("%d %d",&n,&m);
//    for(int i=0; i<n; i++){
//        int t;
//        scanf("%d",&t);
//        k.push_back(t);
//    }
//    sort(k.begin(), k.end());
//    go(0,0,n,m);
//    
//    return 0;
//}

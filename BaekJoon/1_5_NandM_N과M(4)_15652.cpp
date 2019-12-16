////
////  1_5_NandM_N과M(3)_15651.cpp
////  BackJoonPractice
////
////  Created by Min Kyeong Tae on 20/05/2019.
////  Copyright © 2019 Min Kyeong Tae. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//
//int a[10];
//bool c[10];
//
//void go(int index, int start, int n, int m){
//    if(index==m){
//        for(int i=0; i<m; i++){
//            cout << a[i] << " ";
//        }
//        cout << "\n";
//        return;
//    }
//    
//    for(int i=start; i<=n; i++){
//        a[index] = i;
//        go(index+1,i,n,m);
//    }
//}
//
//int main(){
//    int n=0,m=0;
//    scanf("%d %d",&n,&m);
//    go(0,1,n,m);
//    
//    return 0;
//}

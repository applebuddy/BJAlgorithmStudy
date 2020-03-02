////
////  1_5_NandM_N과M(7)_15656.cpp
////  BackJoonPractice
////
////  Created by Min Kyeong Tae on 21/05/2019.
////  Copyright © 2019 Min Kyeong Tae. All rights reserved.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#define endl "\n"
//using namespace std;
//
//int a[10];
//vector<int> v;
//
//void go(int index, int n, int m){
//    if(index==m){
//        for(int i=0; i<m; i++){
//            cout << a[i] << " ";
//        }
//        cout << endl;
//        return;
//    }
//    for(int i=0; i<n; i++){
//        a[index] = v[i];
//        go(index+1,n,m);
//    }
//    return;
//}
//int main(){
//    ios_base :: sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    int n,m;
//    scanf("%d %d",&n,&m);
//    for(int i=0; i<n; i++){
//        int t;
//        scanf("%d",&t);
//        v.push_back(t);
//    }
//    sort(v.begin(), v.end());
//    go(0,n,m);
//    
//    return 0;
//}

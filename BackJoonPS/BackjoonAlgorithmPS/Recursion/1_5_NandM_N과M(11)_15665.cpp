////
////  1_5_NandM_N과M(11)_15665.cpp
////  BackJoonPractice
////
////  Created by Min Kyeong Tae on 22/05/2019.
////  Copyright © 2019 Min Kyeong Tae. All rights reserved.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <set>
//#define endl "\n"
//
//using namespace std;
//
//vector<int> tv;
//set<vector<int>> vs;
//int a[10];
//
//void go(int index, int n, int m){
//    if(index==m){
//        vector<int> t;
//        for(int i=0; i<m; i++){
//            t.push_back(a[i]);
//        }
//        vs.insert(t);
//        return;
//    }
//    
//    for(int i=0; i<n; i++){
//        a[index]=tv[i];
//        go(index+1,n,m);
//    }
//    return;
//}
//
//int main(){
//    ios_base :: sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    int n,m;
//    cin >> n >> m;
//    for(int i=0; i<n; i++){
//        int t;
//        cin >> t;
//        tv.push_back(t);
//    }
//    sort(tv.begin(), tv.end());
//    go(0,n,m);
//    
//    set<vector<int>>::iterator it=vs.begin();
//    for(; it!=vs.end(); it++){
//        const vector<int> &t = (*it);
//        for(auto i : t){
//            cout << i << " ";
//        }
//        cout << endl;
//    }
//    
//    return 0;
//}

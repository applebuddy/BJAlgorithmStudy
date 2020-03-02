////
////  1_5_NandM_N과M(10)_15664.cpp
////  BackJoonPractice
////
////  Created by Min Kyeong Tae on 22/05/2019.
////  Copyright © 2019 Min Kyeong Tae. All rights reserved.
////
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <set>
//#define endl "\n"
//
//using namespace std;
//vector<int> iv;
//set<vector<int>> vs;
//int a[10];
//int c[10];
//
//void go(int index, int s, int n, int m){
//    if(index==m){
//        vector<int> t;
//        for(int i=0; i<m; i++){
//            t.push_back(a[i]);
//        }
//        vs.insert(t);
//        return;
//    }
//    
//    for(int i=s; i<n; i++){
//        if(c[i]==true) continue;
//        c[i]=true;
//        a[index]=iv[i];
//        go(index+1,i,n,m);
//        c[i]=false;
//    }
//    return;
//}
//
//int main(){
//    
//    ios_base :: sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    int n,m;
//    cin >> n >> m;
//    for(int i=0; i<n; i++){
//        int t;
//        cin >> t;
//        iv.push_back(t);
//    }
//    sort(iv.begin(), iv.end());
//    go(0,0,n,m);
//    
//    set<vector<int>>::iterator it=vs.begin();
//    for(; it!=vs.end(); it++){
//        const vector<int> &t = (*it);
//        for(auto v : t){
//            cout << v << " ";
//        }
//        cout << endl;
//    }
//    
//    return 0;
//}

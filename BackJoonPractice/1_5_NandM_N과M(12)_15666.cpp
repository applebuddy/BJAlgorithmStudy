//
//  1_5_NandM_N과M(12)_15666.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 22/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#define endl "\n"

using namespace std;
vector<int> tv;
set<vector<int>> vs;
int a[10];
bool c[10];
void go(int index, int s, int n, int m){
    if(index==m){
        vector<int> t;
        for(int i=0; i<m; i++){
            t.push_back(a[i]);
        }
        vs.insert(t);
        return;
    }
    
    for(int i=s; i<n; i++){
        a[index]=tv[i];
        go(index+1,i,n,m);
    }
    return;
}

int main(){
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        int t;
        cin >> t;
        tv.push_back(t);
    }
    sort(tv.begin(), tv.end());
    go(0,0,n,m);
    
    set<vector<int>>::iterator it=vs.begin();
    for(; it!=vs.end(); it++){
        vector<int> t = (*it);
        for(auto v : t){
            cout << v << " ";
        }
        cout << endl;
    }
    
    return 0;
}

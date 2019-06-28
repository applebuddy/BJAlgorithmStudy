//
//  1_5_NandM_N과M(9)_15663.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 22/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std;

set<vector<int>> sk;
vector<int> vk;
int a[10];
int c[10];

void go(int index, int n, int m){
    if(index==m){
        vector<int> temp;
        for(int i=0; i<m; i++){
            temp.push_back(a[i]);
        }
        sk.insert(temp);
        return;
    }
    for(int i=0; i<n; i++){
        if(c[i]==true) continue;
        c[i]=true;
        a[index]=vk[i];
        go(index+1,n,m);
        c[i]=false;
    }
}

int main(){
    ios_base :: sync_with_stdio(false);
    int n,m;
    cin >> n >> m;
    
    for(int i=0; i<n; i++){
        int t;
        cin >> t;
        vk.push_back(t);
    }
    sort(vk.begin(), vk.end());
    go(0,n,m);
    
    set<vector<int>>::iterator it=sk.begin();
    for(it; it!=sk.end(); it++){
        const vector<int> tv = *it;
        for(int i=0; i<tv.size(); i++){
            cout << tv[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

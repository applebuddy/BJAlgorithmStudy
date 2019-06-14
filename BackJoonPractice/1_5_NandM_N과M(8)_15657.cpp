//
//  1_5_NandM_N과M(8)_15657.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 22/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std;

vector<int> k;
int a[10];

void go(int index, int s, int n, int m){
    if(index==m){
        for(int i=0; i<m; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    
    for(int i=s; i<n; i++){
        a[index]=k[i];
        go(index+1,i,n,m);
    }
}

int main(){
    ios_base :: sync_with_stdio(false);
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        int t;
        cin >> t;
        k.push_back(t);
    }
    sort(k.begin(), k.end());
    go(0,0,n,m);
}

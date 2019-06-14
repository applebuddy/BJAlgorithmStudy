//
//  NandM_N과M(5)_15654.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 20/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> num;
bool c[10];
int a[10];
void go(int index, int n, int m){
    if(index==m) {
        for(int i=0; i<m; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
        return;
    }
    
    for(int i=0; i<n; i++){
        if(c[i]==true) continue;
        c[i]=true;
        a[index]=num[i];
        go(index+1,n,m);
        a[index]=0;
        c[i]=false;
        
    }
}

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0; i<n; i++){
        int t;
        scanf("%d",&t);
        num.push_back(t);
    }
    sort(num.begin(), num.end());
    go(0,n,m);
    
    return 0;
}

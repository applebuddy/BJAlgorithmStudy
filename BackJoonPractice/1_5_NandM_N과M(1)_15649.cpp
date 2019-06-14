//
//  1_5_NandM_N과M(1)_15649.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 18/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>

using namespace std;

bool c[10];
int a[10];

void go(int index, int n, int m){
    if(index==m){
        for(int i=0; i<m; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
        return;
    }
    
    for(int i=1; i<=n; i++){
        if(c[i]==true) continue;
        c[i]=true;
        a[index]=i;
        go(index+1,n,m);
        c[i]=false;
    }
}

int main(){
    
    int n,m;
    scanf("%d %d",&n,&m);
    go(0,n,m);
    return 0;
}

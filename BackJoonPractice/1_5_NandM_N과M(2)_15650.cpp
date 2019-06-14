//
//  1_5_NandM_N과M(2)_15650.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 18/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
using namespace std;

bool c[10];
int a[10];

void go(int index, int selected, int n, int m){
    if(selected==m){
        for(int i=0; i<m; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
        return;
    }
    
    if(index>n) return;
    
    a[selected]=index;
    go(index+1,selected+1,n,m);
    a[selected]=index;
    go(index+1,selected,n,m);
}

int main(){
    
    int n,m;
    scanf("%d %d",&n,&m);
    go(1,0,n,m);
    
    return 0;
}

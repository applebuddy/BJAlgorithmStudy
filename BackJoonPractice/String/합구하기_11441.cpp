//
//  합구하기_11441.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 04/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 합 구하기_11441 : Prefix Sum Problem

#include <iostream>
#include <string.h>
using namespace std;

void solveTheSumOfNumber() {
    int N; cin>>N;
    int arr[N];
    memset(arr,0,sizeof(arr));
    for(int i=0; i<N; i++) {
        cin>>arr[i];
        if(i!=0) arr[i]+=arr[i-1];
    }
    
    int T; cin>>T;
    for(int i=0; i<T; i++) {
        int s,e; cin>>s>>e;
        
        printf("%d\n",arr[e-1]-((s!=1) ? arr[s-2] : 0));
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    solveTheSumOfNumber();
//    return 0;
//}

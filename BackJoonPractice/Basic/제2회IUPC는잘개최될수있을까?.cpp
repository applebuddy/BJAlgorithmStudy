//
//  제2회IUPC는잘개최될수있을까?.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 10/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 제2회 IUPC는 잘 개최될 수 있을까?_12788
#if 1
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

void canIUPCBeHeldWell() {
    int N,M,K,sum=0,Ans=0; cin>>N>>M>>K;
    int arr[N];
    memset(arr,0,sizeof(arr));
    for(int i=0; i<N; i++) cin>>arr[i];
    sort(arr,arr+N,greater<int>());
    for(auto v : arr) {
        if(sum>=M*K) break;
        else Ans++;
        sum+=v;
    }
    
    if(sum<M*K) printf("STRESS\n");
    else printf("%d\n",Ans);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    canIUPCBeHeldWell();
    return 0;
}
#endif

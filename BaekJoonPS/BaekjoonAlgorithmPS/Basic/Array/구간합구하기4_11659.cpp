//
//  구간합구하기4_11659.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 28/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 구간 합 구하기 4_11659
#if 0
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N,T; cin>>N>>T;
    long long arr[N]; memset(arr,0,sizeof(arr));
    int sum=0;
    for(int i=0; i<N; i++) {
        int num; cin>>num;
        sum+=num;
        arr[i]=sum;
    }
    while(T--) {
        int from,to; cin>>from>>to;
        long long Ans = from-2<0 ? arr[to-1] : arr[to-1]-arr[from-2];
        printf("%lld\n",Ans);
    }
    return 0;
}
#endif
